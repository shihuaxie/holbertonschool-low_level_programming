#include "main.h"
#include <stddef.h>

/**
 * _strchr - Function to locate a character in a string
 * @s: string to look into
 * @c: charater needs to be found out
 *
 * Return: a pointer to the first occurrence of the character c in s
 * or NULL if it's not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
