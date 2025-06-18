#include "main.h"

/**
 * main - Entry point
 * 
 * Print out lowercase alphabet 10 times
 * 
 * Using _putchar twice only
 *
 * Return: Always 0 (Success)
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
