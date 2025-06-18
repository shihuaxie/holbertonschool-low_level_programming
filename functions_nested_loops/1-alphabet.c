#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline
 *
 * Return: void
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
