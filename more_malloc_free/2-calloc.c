#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Function that allocates memory for an array
 * @nmemb: the number of elements of the array
 * @size: the size of bytes for each element in the array
 *
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int mem_size;
	char *ptr;

	/* If either nmemb or size is 0, return NULL */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Allocate memory using malloc */
	mem_size = nmemb * size;
	ptr = malloc(mem_size);

	/* If malloc fails, return NULL */
	if (ptr == NULL)
		return (NULL);

	/* Manually set all allocated memory to 0*/
	for (i = 0; i < mem_size; i++)
		ptr[i] = 0;

	return (ptr);
}
