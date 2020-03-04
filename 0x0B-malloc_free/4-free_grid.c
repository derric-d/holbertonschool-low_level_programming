#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees each allocated member of 2d array
 * @grid: pointer to pointer array
 * @height: rows of 2d array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
