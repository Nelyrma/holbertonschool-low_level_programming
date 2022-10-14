#include "main.h"

/**
 * *_memset - fill memory with constant byte
 * @s : the memory space to be filled
 * @b: the byte to fill with
 * @n: number of space to fill
 * Return: the pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
