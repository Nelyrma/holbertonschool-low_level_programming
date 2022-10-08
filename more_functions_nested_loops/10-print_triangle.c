#include "main.h"

/**
 * print_triangle - function that prints triangle
 * @size: the variable
 */

void print_triangle(int size)
{
	int height;
	int width;
	int triangle;

	if (size <= 0)
		_putchar('\n');

	for (height = 0; height <= size; height++)
	{
		for (width =  1; width <= (size - height); width++)
			_putchar(' ');

		for (triangle = 1; triangle <= height; triangle++)
			_putchar('#');

		_putchar('\n');
	}
}
