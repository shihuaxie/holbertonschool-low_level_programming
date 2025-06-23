#include "main.h"

/**
 * print_line - Funciton to print a straight line.
 *
 * @n: length of the line
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
}
