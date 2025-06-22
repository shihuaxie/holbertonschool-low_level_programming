#include "main.h"

/**
 * _abs - Function that returns the absolute value of an integer.
 *
 * @n: - the number value to evaluate.
 *
 * Return: returns the absolute value.
 *
 */

int _abs(int n)
{
	int result;

	if (n < 0)
	{
		result = (n / -1);
	}
	else
	{
		result = n;
	}
		return (result);

}
