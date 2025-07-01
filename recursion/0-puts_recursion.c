#include "main.h"

/**
 * _puts_recursion - Function to print out a string.
 * @s: pointer to the first string element
 *
 * Return: void
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0') /** base case: end of string */
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s); /** print current character */
		_puts_recursion(s + 1); /** recuse to the next character */
	}
}
