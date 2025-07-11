#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Function to concatenate two strings
 * @s1: Frist string
 * @s2: Second string
 * @n: number of bytes for s2
 *
 * Return: a pointer points to a newly allocated space in memory
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int len_s2 = 0;
	unsigned int len_s1 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1]!= '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;

	if (n >= len_s2)
	{
		n = len_s2;
	}

	new_string = malloc(sizeof(char) * (len_s1 + n + 1));

	/* copy s1 string to new_string */
	for (i = 0; i < len_s1; i++)
	{
		new_string[i] = s1[i];
	}

	/* copy s2 string to new_string */
	for (j = 0; j < n; j++)
	{
		new_string[i + j] = s2[j];
	}
	new_string[i + j] = '\0';

	return (new_string);
}
