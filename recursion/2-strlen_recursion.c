#include "main.h"

/**
 * _strlen_recursion - Recursively calculates the length of a string
 * @s: The string to measure
 *
 * Return: The length of the string (excluding '\0')
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0') /** End point of recursion */
	{
		return (0);
	}
	else
	{
		/** total length =  current character + left character */
		/**
		 * For example: char *s = "cat";
		 * _strlen_recursion("cat")
		 * = 1 + _strlen_recursion("at")
		 * = 1 + (1 + _strlen_recursion("t"))
		 * = 1 + (1 + (1 + _strlen_recursion(" "))
		 * = 1 + (1 + (1 + 0))
		 * = 3
		 */
		return (1 + _strlen_recursion(s + 1));
	}
}
