#include "main.h"

/**
 * *_strcat - concatenate two strings
 * @dest: the first variable
 * @src: the second variable
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
