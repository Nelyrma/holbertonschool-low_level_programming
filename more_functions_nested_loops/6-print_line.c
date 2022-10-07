#include "main.h"

/**
 * print_line - function that draw a line
 * @n: the variable
 */

void print_line(int n)
{
	if (n > 0)
	{
		_putchar((n * '_') + '0');
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n);
}
