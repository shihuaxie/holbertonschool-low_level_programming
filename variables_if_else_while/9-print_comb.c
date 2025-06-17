#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Use putchar to print out single digit numbers
 *
 * Seperated by coma except the last digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');

		if (n != 9)
		{
			putchar(',');
		}
	}
	putchar('\n');

	return (0);
}

