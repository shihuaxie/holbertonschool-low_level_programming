#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Function that creates an array of integers
 * @min: one value the array start with
 * @max: the other valude the array ends with
 *
 * Return: the pointer to the newly created array
 *
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	/* If min > max, we cannot create a valid range */
	if (min > max)
		return (NULL);

	/* Calculate how many integers in total (inclusive)*/
	size = (max - min) + 1;

	/*Allocate memory for the array*/
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	/* Fill the array with values from min to max*/
	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
