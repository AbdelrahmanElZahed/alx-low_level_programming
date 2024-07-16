#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid
 * @grid: Pointer to the 2D grid of integers
 * @height: Height of the grid (number of rows)
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return; /* Check for valid input */
	/* Free each row of the grid */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	/* Free the grid itself */
	free(grid);
}
