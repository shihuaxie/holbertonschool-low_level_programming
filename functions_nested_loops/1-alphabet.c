#include "main.h"

void print_alphabet(void);

/**
 * function_name - short description of what it does
 *
 * Return: what it returns (or 'void' if nothing)
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
