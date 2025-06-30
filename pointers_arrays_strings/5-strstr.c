#include "main.h"
#include <stddef.h>

/**
 * _strstr - function  that locates a substring
 * @haystack: The string to search in
 * @needle: The substring to find
 *
 * Return:a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	/** If needle is empty, return haystack as is */
	if (needle[0] == '\0')
	{
		return (haystack);
	}

	/** Loop through each character of haystack */
	while (haystack[i] != '\0')
	{
		j = 0;
		/** Compare characters from haystack and needle */
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
		{
			j++;
		}

		/** if we reached the end of needle, match found */
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	i++;
	}

	return (NULL); /** If not found, return NULL */

}
