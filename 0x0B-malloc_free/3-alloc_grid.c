#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: Pointer to the 2D array of integers (grid), or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;
	/* Check for valid dimensions */
	if (width <= 0 || height <= 0)
		return (NULL);
	/* Allocate memory for rows (height) */
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	/* Allocate memory for columns (width) and initialize to 0 */
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Free previously allocated memory if allocation fails */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		/* Initialize each element to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
