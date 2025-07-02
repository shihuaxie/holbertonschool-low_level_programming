#include "main.h"

/**
 * factorial - Funtion to calulate the factorial of a given number.
 * @n: The given number
 *
 * Return: the factorial of n.
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
