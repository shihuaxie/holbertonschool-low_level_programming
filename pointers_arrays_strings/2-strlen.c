#include "main.h"

/**
 * _strlen - Function to print out the lenght of a string.
 *
 * @s: the string to be passed in from main
 *
 * Return: the length of the char.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);

}
