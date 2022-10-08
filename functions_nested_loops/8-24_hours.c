#include "main.h"

/**
 * jack_bauer - print every minute of the day of Jack Bauer
 */

void jack_bauer(void)
{
	int hour;
	int min;

	for (hour = 0, hour <= 9; hour++)
	{
		for (min = 0; min <= 9; min++)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
		}
		_putchar('\n');
	}

}
