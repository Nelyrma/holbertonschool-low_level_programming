#include "main.h"

/**
 * print_line - function that draw a line
 * @n: the variable
 */

void print_line(int n)
{
	int nbr_line;

	if (n > 0)
	{
		for (nbr_line = 0; nbr_line < n; nbr_line++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
