#include "main.h"

/**
 * *_strncat - concatenate two strings
 * @dest : the first string
 * @src: the second string
 * @n: bytes number of src
 * Return: the value of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
