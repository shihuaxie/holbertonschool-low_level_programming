#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 *
 * @str: The input string to be modified.
 *
 * Return: A pointer to the modified string.
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		/** If it's the first character and it's a lowercase letter, capitalize it */
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - ('a' - 'A');
		}

		/** If the current char is a sep & the next is a lowercase letter */

		if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		&& (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		{
			str[i + 1] = str[i + 1] - ('a' - 'A');
		}

		i++; /** Move to the next character */
	}
	return (str);
}
