#include "main.h"

/**
 * puts_half - Function to print the second half string.
 *
 * @str: string to be printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int length = 0;
	int start_str, index;

	/** get the length of the string */
	while (length[str] != '\0')
	{
		length++;
	}

	/** evaluate if the string length is even or odd */
	if (length % 2 == 0)
	{
		start_str = length / 2; /** the string length is odd */
	}
	else
	{
		start_str = (length + 1) / 2; /** the string length is even */
	}

	/** print the second half string */
	for (index = start_str; index < length; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
