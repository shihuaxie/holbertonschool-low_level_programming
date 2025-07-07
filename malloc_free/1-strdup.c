#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Function that returns a pointer to a newly allocated space
 * @str: passed in param - string needs to be copied
 *
 * Return: pointer to a new string
 *
 */

char *_strdup(char *str)
{
	char *str_cpy;
	int size = 0;
	int i;

	if (str == NULL)
		return (NULL);

	/** Calulate the length of str*/
	while (str[size] != '\0')
		size++;

	/* Allocate memory for str_cpy, (+1 for '\0')*/
	str_cpy = malloc(sizeof(char) * (size + 1));

	if (str_cpy == NULL)
		return (NULL);

	/* Copy str to str_cpy */
	for (i = 0; i <= size; i++)
	{
		str_cpy[i] = str[i];
	}

	return (str_cpy);
}
