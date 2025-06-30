#include "main.h"

/**
 * print_chessboard - Prints an 8x8 chessboard.
 * @a: Pointer to a 2D array of characters (8 columns per row).
 *
 * Description: This function loops through each element in the 8x8
 * 2D array and prints each character using _putchar, followed by
 * a newline after each row.
 *
 * Return: void.
 *
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	/** LOop through rows -- 8 rows */
	for (i = 0; i < 8; i++)
	{
		/** Lopp through columns -- 8 clo */
		for (j = 0; j < 8; j++)
		{
			/** print out i row and j col, increased by 1 */
			_putchar(a[i][j]);
		}
	_putchar('\n');
	}
}
