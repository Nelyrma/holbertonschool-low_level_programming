#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 * Return: Always 0
 */

void print_alphabet(void)
{
	int lower = 'a';

	while (lower < 'z')
	{
		_putchar(lower);
		lower++;
	}
	_putchar('\n');
	return (0);
}
