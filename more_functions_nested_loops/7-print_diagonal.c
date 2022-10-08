#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: the variable
 */

void print_diagonal(int n)
{
	int nbr_line;
	int t;

	if (n > 0)
	{
		for (nbr_line = 0; nbr_line < n; nbr_line++)
		{
			for (t = 0; t < nbr_line < t++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
