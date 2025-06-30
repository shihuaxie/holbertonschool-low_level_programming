#include "main.h"

/**
 * _memcpy - Function to copy memory from src to dest
 * @dest: pointer to mem to be filled
 * @src: pointer to mem to be copied
 * @n: num of bytes to copy
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
