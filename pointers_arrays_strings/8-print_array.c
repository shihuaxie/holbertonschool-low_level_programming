#include "main.h"
#include <stdio.h>

/**
 * print_array - function to print n elements of an array
 *
 * @a: array passed in
 * @n: numbers of elements needs to be printed
 *
 * Return: void
 *
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
/** print comma and space between each element except the last one */
	if (index != n - 1)
	{
		printf(", ");
	}

	printf("\n");
	}
}
