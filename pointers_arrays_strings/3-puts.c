#include "main.h"

/**
 * _puts - Function to print out a string
 * @str: the string to print
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
