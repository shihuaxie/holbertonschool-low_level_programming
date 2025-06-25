#include "main.h"

/**
 * swap_int - Function to swap the value of two integers
 *
 * @a: First integer
 * @b: Second integer
 *
 * Return: void
 *
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
