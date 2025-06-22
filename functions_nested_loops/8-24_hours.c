#include "main.h"

/**
 * jack_bauer - Prints every min and every hrs.
 * Return: void.
 *
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			/** Print hours and minutes */
			_putchar((hour / 10) + 48);/** Prints the decade of hours */
			_putchar((hour % 10) + 48);/** Prints the unit digit of hours */
			_putchar(':');
			_putchar((minute / 10) + 48);
			_putchar((minute % 10) + 48);
			_putchar('\n');
		}
	}
}
