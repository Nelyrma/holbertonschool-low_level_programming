#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - return a pointer to a 2 dimensional array of int
 * @width: the width of the array
 * @height: the height of the array
 * Return: NULL if width or height <= 0, a pointer if not
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == 0)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		array[j] = malloc(sizeof(int) * width);

		if (array[j] == 0)
		{
			for (j = 0; j < height; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
		for (i = 0; i < width; i++)
			array[i][j] = 0;
	}
	return (array);
}
