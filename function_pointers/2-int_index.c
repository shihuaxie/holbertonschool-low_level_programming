#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Function that searches for an integer
 * @array: search the integer from the array
 * @size: the size of array
 * @cmp: function pointer to do the work
 *
 * Return: the index number of the integer
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]) != 0)
				{
					return (i);
				}
			}
		}
	}
	return (-1);
}
