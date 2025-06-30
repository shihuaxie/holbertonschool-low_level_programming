#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: original string needs to be checked
 * @accept: The collection of allowed characters
 *
 * Return: the number of matched character
 */

unsigned int _strspn(char *s, char *accept)
{	int i = 0, j, found;
	unsigned int result = 0;

	while (s[i] != '\0')
	{
		j = 0;
		found = 0;
		/** check if s[i] exsit in the accept string */
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break; /** Match found, no need to check further */
			}
		j++;
		}
		/** if not found in accept, stop counting */
		if (!found)
		{
			break;
		}
		result = result + 1;
		i++;
	}
	return (result);
}
