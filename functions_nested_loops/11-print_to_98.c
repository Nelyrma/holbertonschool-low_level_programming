#include "main.h"
#include<stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: the variable
 * Return: Always 0
 */

void print_to_98(int n)
{
	int n = 0;

	while (n <= 98)
	{
		printf("%d", n);
		_putchar(',');
		_putchar('\n');
		n++;
	}
}
