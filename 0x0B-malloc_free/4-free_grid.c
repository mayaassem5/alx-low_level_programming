#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid.
 * @grid: multidimensional array of integers.
 * @height: height of the grid.
 *
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		int j = 0;

		while (j < height)
			free(grid[i][j]);

		free(grid);
	}
}
