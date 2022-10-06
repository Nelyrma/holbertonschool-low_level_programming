#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet in lowercase 10 times
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char alpha;

	for (i = 0, i <= 9, i++)
	{
		for (alpha = 'a', alpha <= 'z', alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
