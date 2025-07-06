#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers passed as command line arguments
 * @argc: argument count
 * @argv: argument vector (array of strings)
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		/* switch the first param from string to int */
		/* using function atoi */
		a = atoi(argv[1]);

		b = atoi(argv[2]);

		result = a * b;

		printf("%d\n", result);
	}
	return (0);
}
