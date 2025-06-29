#include "main.h"

/**
 * *_strncat - Function to concatenates two strings
 * @dest: First string
 * @src: second string
 * @n: the amount of bytes should be copied to dest
 *
 * Return: combined string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	/** the copied char cannot exceed n */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
