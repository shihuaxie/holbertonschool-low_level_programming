#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Sums all the parameters
 * @n: number of arguments
 *
 * Return: sum of all arguments, or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int total = 0;

	if (n == 0)
		return (0);

	/* start reading args after 'n' */
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		total = total + va_arg(args, unsigned int);
	}
	/* clear args*/
	va_end(args);

	return (total);
}
