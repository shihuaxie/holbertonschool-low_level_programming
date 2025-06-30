#include "main.h"

/**
 * _memset - Function fills memory with a constant byte
 * @s: pointer to mem area to fill
 * @b: byte{0 x 01} to use for filling
 * @n: num(95) of bytes to fill
 *
 * Return: pointer points to mem area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
