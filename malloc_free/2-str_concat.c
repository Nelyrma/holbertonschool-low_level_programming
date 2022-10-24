#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenate two strings
 * @s1: the first string
 * @s2: the second string
 * Return: NULL if failure, the pointer if not
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, size1 = 0, size2 = 0;
	char *string;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	while (s1[i])
		size1++, i++;

	while (s2[j])
		size2++, j++;

	size2++;

	string = malloc(sizeof(char) * (size1 + size2));

	if (string == 0)
		return (NULL);

	i = 0, j = 0;
	while (i < size1)
	{
		string[i] = s1[i];
		i++;
	}
	while (j < size2)
	{
		string[i] = s2[j];
		i++;
		j++;
	}
	return (string);
}
