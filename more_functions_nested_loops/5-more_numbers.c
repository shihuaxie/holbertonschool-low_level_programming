#include "main.h"

/**
 * more_numbers - function to print digits for 10 times from 0 to 14
 *
 * Return: Always 0.
 *
 */

void more_numbers(void)
{
	int k, j;

	for (k = 0; k < 10; k++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + 48);
			}
		_putchar((j % 10) + 48);
		}
	_putchar('\n');
	}
}




