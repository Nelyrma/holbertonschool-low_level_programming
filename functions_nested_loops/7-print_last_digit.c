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
		n *= -1;

	_putchar(last_digit + '0');
	return (last_digit);
}
