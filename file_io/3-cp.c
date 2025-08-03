#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUF_SIZE 1024

int open_file_from(const char *filename);
int open_file_to(const char *filename);
void copy_file_data(int fd_from, int fd_to, const char *from, const char *to);
void safe_close(int fd);

/**
 * main - Entry point for cp program
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0 on success, exits with various codes on error
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd_to = open_file_to(av[2]);

	copy_file_data(fd_from, fd_to, av[1], av[2]);

	safe_close(fd_from);
	safe_close(fd_to);

	return (0);
}

/**
 * open_file_from - Opens a file for reading
 * @filename: Name of the file to open
 *
 * Return: File descriptor on success, exits on failure
 */
int open_file_from(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	return (fd);
}

/**
 * open_file_to - Opens or creates a file for writing (truncates if exists)
 * @filename: Name of the file to open
 *
 * Return: File descriptor on success, exits on failure
 */
int open_file_to(const char *filename)
{
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (fd);
}

/**
 * copy_file_data - Copies data from one file descriptor to another
 * @fd_from: Source file descriptor
 * @fd_to: Destination file descriptor
 * @from: Name of the source file (for error message)
 * @to: Name of the destination file (for error message)
 */
void copy_file_data(int fd_from, int fd_to, const char *from, const char *to)
{
	char buf[BUF_SIZE];
	ssize_t r, w;

	while ((r = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		w = write(fd_to, buf, r);
		if (w == -1 || w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_file);
			exit(99);
		}
	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_file);
		exit(98);
	}
}

/**
 * safe_close - Closes a file descriptor and checks for errors
 * @fd: The file descriptor to close
 */
void safe_close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
