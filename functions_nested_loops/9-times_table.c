#include "main.h"

/**
 *  times_table - print the 9 times table
 */

void times_table(void)
{
	int n;
	int m;
	int p;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (m = 0; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');
			p = m * n;

			if (p <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('0' + (p / 10));
				_putchar('0' + (p % 10));
			}
		}
		_putchar('\n');
	}
}
