#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Function that searches a string for any of a set of bytes.
 * @s: the string needs to be checked
 * @accept: the target string containing the bytes to match
 *
 * Return: the address of the char, if not, return NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				/** found a match, return the address of the char */
				return (&s[i]);
			}
		j++;
		}
	i++;
	}
	/** No match found */
	return (NULL);
}
