#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates for a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: Null or the grid
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int q, j;

	q = j = 0;
	if (height <= 0)
	{
		return (NULL);
	}
	p = (int **)malloc(height * sizeof(p));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (q = 0; q < height; q++)
	{
		p[q] = malloc(width * sizeof(int));
		if (p[q] == NULL)
		{
			for (j = 0; j < width; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			p[q][j] = 0;
		}
	}
	return (p);


}
