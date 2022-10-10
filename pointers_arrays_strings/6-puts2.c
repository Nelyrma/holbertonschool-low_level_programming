#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: the string
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * puts2 - print every other character of a string
 * @str: the string
 */

void puts2(char *str);
{
	int i;

	for (i = 0; i < _strlen(char *s); i += 2)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
