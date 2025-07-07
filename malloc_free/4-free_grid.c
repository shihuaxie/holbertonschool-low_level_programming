#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid
 * @grid: The 2D grid to free
 * @height: The number of rows in the grid
 * Return: nothing
 *
 */

void free_grid(int **grid, int height)
{
	/* must free each inner array (each row) before freeing the outer array */

	int i;

	/* Check if the grid is NULL or height is invalid */
	if (grid == NULL || height <= 0)
		return;

	/* Loop through each row and free the memory allocated for it */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/*Finally, free the array of pointers itself */
	free(grid);
}

