#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -returns a pointer to a 2 dimensional array of integers
 * @width: variable
 * @height: variable
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int *grid;
	int i = 0;
	int j = 0;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	grid = malloc((width * height) * sizeof(int));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
