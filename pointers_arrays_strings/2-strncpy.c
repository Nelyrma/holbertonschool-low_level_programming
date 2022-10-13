#include "main.h"

/**
 * *_strncpy - copie a string from source to the destination
 * @dest : the destination
 * @src: the source
 * @n: bytes number of the char source
 * Return: the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
