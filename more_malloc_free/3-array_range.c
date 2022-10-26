#include "main.h"
#include <stdlib.h>

/**
 * *array_range - create an array of integers
 * @min: the min value of the array
 * @max: the max value of the array
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int i;
	int m = (max - min) + 1;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * m);

	if (array == 0)
		return (NULL);

	for (i = 0; i < m; i++)
		array[i] = min;

	return (array);
}
