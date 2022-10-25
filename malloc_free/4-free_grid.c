#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free a 2 dimensional grid created previously
 * @grid: the array
 * @height: the height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == 0)
		free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
