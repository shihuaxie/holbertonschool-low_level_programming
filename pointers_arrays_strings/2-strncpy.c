#include "main.h"

/**
 * *_strncpy - Function to copy string src to dest
 * @dest: First string
 * @src: Second string
 * @n: Max chars should be copied
 * Return: copied dtring dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	/** Copy char from str to dest until it reaches to number of n chars or \0 */
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	/** If src is shorter than n, fill the left sapces with \0 to dest */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
