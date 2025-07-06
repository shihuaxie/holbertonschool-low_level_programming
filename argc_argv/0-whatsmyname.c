#include "main.h"

/**
 * main - Function to print the program name
 * @argc: Argument count
 * @argv: Argument vector (array of strings)
 *
 * Return: 0
 */

int main (int argc, char *argv[])
{
	int i = 0;

	/* Make sure there is an argument */ 
	if (argc > 0)
	{
		/* Loop the string argv[0]*/
		while (argv[0][i] != '\0')
		{
			/* print out every char in the string argv[0] */
			_putchar(argv[0][i]);
			i++;
		}
		_putchar('\n');
	}
	return (0);
}
