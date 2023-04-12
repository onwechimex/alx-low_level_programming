#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a grid of integers
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
	{
		free(grid[m]);
	}
	free(grid);
}
