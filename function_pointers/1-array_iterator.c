#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Function executes a function given
 * as a parameter on each element of an array
 * @array: array with elements
 * @size: the size of the array
 *
 * @action: function pointer
 *
 * Return: void
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
/*size_t is a type to represent the size or the index of arrays*/
	size_t i = 0;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}

}
