#include "main.h"

#include "main.h"

/**
 *_strlen - return the length of a string
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
 * *_strcpy - copy the string pointed
 * @dest: the destination of the string
 * @src: the destination of the string
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int n = _strlen(src);

	for (i = 0; i <= n ; i++)
		dest[i] = src[i];

	return (dest);
}
