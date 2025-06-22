#include "main.h"

/**
 * times_table - Prints a 9 x 9 table.
 * Return: void.
 *
 */
void times_table(void)
{
	int row, column, result;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			result = row * column;

/** Align, if result is < 10 and not 0, put a space in front of the number */
			if (column != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (result < 10 && column != 0)
			{
			/** empty space to align the number */
				_putchar(' ');
			}

			if (result < 10)
			{
				_putchar(result + 48);
			}
			else
			{
				_putchar((result / 10) + 48);

				_putchar((result %  10) + 48);
			}
		}
	_putchar('\n');
	}
}
