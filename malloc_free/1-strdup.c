#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * @str: the given string
 * Return: NULL if str is null, a pointer to the duplicated string if not
 */

char *_strdup(char *str)
{
	int i;
	int  size;
	char *new_string;

	if (str == 0)
		return (NULL);

	while (str[i])
	{
		size++;
		i++;
	}
	size++;

	new_string = malloc(sizeof(char) * size);

	if (new_string == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		new_string[i] = str[i];

	return (new_string);
}
