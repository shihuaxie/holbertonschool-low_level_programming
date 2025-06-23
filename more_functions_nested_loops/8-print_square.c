#include "main.h"

/**
 * print_square - function to print squares
 *
 * @size: the size of square passed from main
 *
 * Return: void
 *
 */

void print_square(int size)
{
	int row = 0, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (row < size)
		{
			n = 0;
			while (n < size)
			{
				_putchar('#');
				n++;
			}
		_putchar('\n');
		row++;
		}
	}
}
