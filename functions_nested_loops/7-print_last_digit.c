#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: the given number
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
		n = n * (-1);

	_putchar('0' + last_digit);
	_putchar('\n');
	return (last_digit);
}
