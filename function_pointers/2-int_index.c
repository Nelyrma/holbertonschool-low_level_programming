#include <stddef.h>
#include <stdlib.h>

/**
 * int_index - search for an integer
 * @array: parameter
 * @size: size of the array
 * @cmp: function pointer
 * Return: the index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);

		return (-1);
	}
}
