#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sums of the two diagonals of a square matrix.
 * @a: Pointer to the first element of the matrix (flattened as 1D array)
 * @size: The number of rows/columns in the square matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (i < size)
	{
		/** Primary diagonal: a[i][i] */
		sum1 = sum1 + *(a + i * size + i);
		/** Secondary diagonal: a[i][size - 1 - i] */
		sum2 = sum2 + *(a + i * size + (size - 1 - i));

		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
