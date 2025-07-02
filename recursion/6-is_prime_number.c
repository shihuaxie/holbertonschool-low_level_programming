#include "main.h"
int check_prime(int n, int divisor);

/**
 * is_prime_number - Determines if a number is a prime number.
 * @n: The number to be checked.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 *
 */

int is_prime_number(int n)
{
	/** n <= 0, n < 1, return 0 */
	if (n < 2)
	{
		return (0);
	}
	else
	{
		/** call the helper function starting with divisor 2. */
		return (check_prime(n, 2));
	}
}

/**
 * check_prime - Function recursively checks if `n` has any divisor.
 * @n: the number to check
 * @divisor: the current number to try dividing n, start from 2
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */

int check_prime(int n, int divisor)
{
	/* If n is divisible by divisor, then it is not a prime number */
	if (n % divisor == 0)
	{
		return (0);
	}
	/* If divisor squared is greater than n, */
	/* and no divisor was found, it's a prime number */

	if (divisor * divisor > 0)
	{
		return (1);
	}
	/** Otherwise, try the next divisor (recursive call) */
	return (check_prime(n, divisor + 1));
}
