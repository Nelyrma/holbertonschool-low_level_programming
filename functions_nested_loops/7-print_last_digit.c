#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: the given number
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	_putchar('last_digit');
	return (last_digit);
	_putchar('\n');
}
