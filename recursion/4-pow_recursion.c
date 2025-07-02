#include "main.h"

/**
 * _pow_recursion - Function that returns the value of x ^ y.
 * @x: The value of x
 * @y: The power
 *
 * Return:  x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		/* X * X^(y-1) */
		/**
		 * 5^3 = 5 * 5 * 5
		 * 5 * _pow_recursion(5, 3)
		 *     = 5 * (5 * _pow_recursion(5, 2)
		 *     = 5 * (5 * (5 * _pow_recursion(5, 1)
		 *     = 5 * (5 * (5 * _pow_recursion(5, 0)
		 *     = 5 * (5 * (5 * 1)
		 *     = 125
		 */
		return (x * _pow_recursion(x, y - 1));

	}
}
