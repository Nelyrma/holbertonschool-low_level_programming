#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: the variable
 * Return: the value of the variable length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}


/**
 * puts_half - print half of a string
 * @str : the variable
 */

void puts_half(char *str)
{
	int len = _strlen(str);
	int i;

	if ((len % 2) != 0)
		i = (len / 2) + 1;
	else
		i = (len / 2);

	while (i < len)
	{
		_putchar(*(str + i));
		i++;
	}
}
