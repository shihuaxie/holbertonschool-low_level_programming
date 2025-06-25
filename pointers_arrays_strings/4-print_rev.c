#include "main.h"

/**
 * print_rev - function to print out string in reverse
 * @s: string to print
 *
 * Return: void
 */

void print_rev(char *s)
{
	int length = 0;
	/** get the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}
	/** print the string from the end */

	length--;
	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
