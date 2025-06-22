#include "main.h"

/**
 * print_last_digit - Prints and returns the last digit.
 * @n: pass the number value to evaluate.
 *
 * Return: returns the last digit of the input nubmer.
 *
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (n < 0)
	{
		last_digit = -last_digit;

		_putchar(last_digit + 48);
	}
	else
	{
		_putchar(last_digit + 48);
	}

	return (last_digit);
}
