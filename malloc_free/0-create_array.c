#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - create an array of chars
 * @size: size of the array
 * @c: the character
 * Return: NULL if size = 0, the pointer if not
 */

char *create_array(unsigned int size, char c)
{
	int i;
	int *array;

	if (size <= 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == 0)
		return (NULL);

	for (i = 0; i < (int)size; i++)
	{
		array[i] = c;
	}
	array[i] = '\0';

	return (array);
}
