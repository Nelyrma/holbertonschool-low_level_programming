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
		for (m = 0; m <= 9; m++)
		{
			p = m * n;

			if (p <= 9)
			{
				_putchar('0' + p);
				_putchar(',');
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
