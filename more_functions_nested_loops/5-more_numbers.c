#include "main.h"

/**
 * more_numbers - print numbers 10 times
 */

void more_numbers(void)
{
	int i;
	int n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			_putchar('0' + n);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
