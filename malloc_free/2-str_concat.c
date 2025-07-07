#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings.
 * @s1: First string
 * @s2: Second string
 *
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int size, size1 = 0,  size2 = 0;
	int i, j;

	/* Treat NULL as empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate lengths */
	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;

	size = size1 + size2;

	/* Allocate memory for concatenated string (+1 for '\0') */
	s3 = malloc(sizeof(char) * (size + 1));

	/* Copy s1 into s3 */
	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];

	/* Copy s1 into s3 */
	for (j = 0; s2[j] != '\0'; j++)
		s3[i + j] = s2[j];

	/* Add null terminator */
	s3[i + j] = '\0';

	return (s3);
}
