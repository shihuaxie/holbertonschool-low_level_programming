#include "main.h"

/**
 * reverse_array - Function reverses the content of an array of integers.
 * @a: The array needs to be reversed
 * @n: The amount of the array
 *
 * Return: A reversed array
 *
 */

void reverse_array(int *a, int n)
{
	int start = 0; /** it points to the first ele in a */
	int end = n - 1; /** it points to the last ele in a */
	int tmp;

	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;

/** start and end will compare with each other from 2 sides to middle */
		start++;
		end--;
	}
}
