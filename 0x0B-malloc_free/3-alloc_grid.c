#include "holberton.h"
#include <stdlib.h>

/**
 * free_2dArr - free each element of array
 * @grid: grid being freed
 * @N: lement to free
 * Return: grid freed
 */
void free_2dArr(int **grid, int N)
{
	int i;

	for (i = 0; i < N; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
/**
 * alloc_grid - create a 2 dimensional arraay of int
 * @width: width of array(columns)
 * @height: height of array (rows)
 * Return: pointer to grid array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	i = 0;
	while (i < height)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			free_2dArr(grid, i);
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
		i++;
	}
	return (grid);
}
