#include "main.h"

int _sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * @n: input number
 *
 * Return: the natural square root of n
 * or -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, 0)); /** search the root from 0 */
	}

}

/**
 * _sqrt_helper - Helper function that recursively finds the square root
 * @n: target number to find the square root of
 * @i: current candidate for square root
 *
 * Return: the square root if found, otherwise -1
 */

int _sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		/** ound the exact square root */
		return (i);
	}
	if (i * i > n)
	{
		/** no natural square root */
		return (-1);
	}

	return (_sqrt_helper(n, i + 1)); /** keep trying to the next i */
}
