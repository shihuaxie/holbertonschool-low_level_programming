#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: Always 0
 *
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);

	}
	return (0);
}
