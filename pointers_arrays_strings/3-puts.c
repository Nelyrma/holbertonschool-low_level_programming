#include "main.h"

/**
 * _puts - print a string
 * @str: the variable
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
