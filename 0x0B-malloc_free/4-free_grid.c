#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid
 * @grid: Pointer to the 2D grid of integers
 * @height: Height of the grid (number of rows)
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL || height <= 0)
		return ();
	/* Free memory allocated for each row */
	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	/* Free memory allocated for the grid itself */
	free(grid);
}
