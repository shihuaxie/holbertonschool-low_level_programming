#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 *
 */

int main(int argc, char *argv[])
{
	if (argv[0] != NULL)
	{
		printf("%d\n", (argc - 1));
	}
	return (0);
}
