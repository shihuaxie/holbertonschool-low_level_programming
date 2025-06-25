#include "main.h"

/**
 * _strcpy - function copies the string to dest, including \0
 * @dest: first param
 * @src: second param
 *
 * Return: always 0
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
/** assign the individual elements from src to dest one by one */
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
/** copy the \0 as well */
	dest[i] = '\0';

	return (dest);
}
