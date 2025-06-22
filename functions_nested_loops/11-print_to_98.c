#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - check the code
 * @n: int param to count up/down from
 *
 * Return: comma separated sequence of ints to 98.
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	printf("\n");
}
