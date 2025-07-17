#include "3-calc.h"

/**
 * op_add -Function to calculate the sum of 2 integers
 * @a: first integer
 * @b: Second integer
 *
 * Return: sum of a + b
 *
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function to return the difference of 2 integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function to return the product of 2 integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function to return a division of 2 integers
 * @a: first integer
 * @b: second integer
 *
 * Return: division of a / b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function to return the remainder of 2 integers
 * @a: first integer
 * @b: second integer
 *
 * Return: reminder of a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
