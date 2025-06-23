#include "main.h"

/**
 * print_triangle - function to print a triangle
 *
 * @size: the line size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

/** outside loop to control the rows */
	for (i = 1; i <= size; i++)
	{
		int space;
/** print the empty space:space = size - i */
		for (space = 0; space < size - i; space++)
		{
			_putchar(' ');
		}
/** inside loop to control the amount of # */
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
