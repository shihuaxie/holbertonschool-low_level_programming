#include "main.h"

/**
 * *_strcat - Function to append a string src to string dest
 * @dest: First string
 * @src: Second string
 *
 * Return: A new string combined by src and dest with \0.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	/** Find the last index of dest */
	while (dest[i] != '\0')
	{
		i++;
	}
	/** Loop every char of string src */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	/** Adding the terminating mark */
	dest[i] = '\0';
	return (dest);
}
