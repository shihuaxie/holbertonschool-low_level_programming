#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout
 * @filename: Name of the file to read
 * @letters: Number of letters to read and print
 * Return: The actual number of letters it could read and print
 *         0 if file can't be opened or read, or if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;
	ssize_t r, w;
	char *buf;

	if (filename == NULL)
		return (0);
	/* Open the file for reading */
	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
		return (0); /* Failed to open file */
	/* Allocate memory to store read bytes */
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(file_des);
		return (0); /* Allocation failed */
	}
	/* Read up to 'letters' bytes from the file */
	r = read(file_des, buf, letters);
	if (r == -1)
	{
		free(buf);
		close(file_des);
		return (0); /* Failed to read */
	}
	/* Write the bytes to standard output (file descriptor 1) */
	w = write(STDOUT_FILENO, buf, r);
	if (w == -1 || w != r)
	{
		free(buf);
		close(file_des);
		return (0); /* Failed to write or partial write */
	}

	/* Free memory and close file */
	free(buf);
	close(file_des);
	return (w);
}
