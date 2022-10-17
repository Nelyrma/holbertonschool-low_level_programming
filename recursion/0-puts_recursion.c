#include "main.h"

/**
 * _puts_recursion - print a string
 * @s : the string to print
 * Return: the result
 */

void _puts_recursion(char *s)
{
	if (s && s != '\0')
	{
		_putchar(s);
		s++;
	}
	return (_puts_recursion(s) + 1);
}
