#include "main.h"

/**
 * print_diagonal - Function to print out diagonal line
 *
 * @n: the number of times the line to be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
