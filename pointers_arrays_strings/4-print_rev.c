#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string to reverse
 */

void print_rev(char *s)
{
	int length = 0;
	int index;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	s--;
	for (index = length; index > 0; index--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
