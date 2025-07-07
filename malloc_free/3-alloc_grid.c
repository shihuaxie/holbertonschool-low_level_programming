#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of teh array
 *
 * Return: pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* evaluate if the param is valid */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for every rows (height) */
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	 /* Allocate memory for columns in each row */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			/* Free all previously allocated rows on failure */
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);

			return (NULL);
		}

		/* Initialize all elements to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
