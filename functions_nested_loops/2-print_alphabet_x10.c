#include "main.h"

/**
 * print_alphabet_x10 - function to print out lowercase alphabet for 10 times.
 *
 * Return: void.
 */

void print_alphabet_x10(void)
{
	int n;

	char c;

	for (n = 0; n <= 9; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

		_putchar('\n');

	}
}
