#include "main.h"

/**
 * string_toupper - Function changes lowercase of a string to uppercase
 * @str: the string need to be updated
 *
 * Return: updated string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
/** lowercase to uppercase, str[i] = str[i] - 32 */
			str[i] = str[i] - ('a' - 'A');
		}
	i++;
	}
	return (str);
}
