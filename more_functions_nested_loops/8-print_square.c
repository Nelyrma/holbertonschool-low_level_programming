#include "main.h"

/**
 * print_square - function that prints a square
 * @size: the size of the square
 */

void print_square(int size)
{

	int right;
	int left;

	if (size > 0)
	{
		for (right = 0; right < size; right++)
		{
			for (left = 0; left < size; left++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
