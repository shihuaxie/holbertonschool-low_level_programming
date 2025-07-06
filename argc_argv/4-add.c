#include <stdio.h>
#include <stdlib.h>

/**
 * is_number - checks if a string only contains digits
 * @s: the string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */

int is_number(char *s)
{
	int i = 0;

	/* Evaluate if the string is empty or not */
	if (s[0] == '\0')
	{
		return (0);
	}
	/* Loop every element in the string to check if it's a number*/
	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - adds positive numbers passed via command line
 * @argc: argument count
 * @argv: array of argument strings
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum +  atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
