#include "main.h"
#include <stdlib.h>

/**
 * _strlen - return string length
 * @string: string
 * Return: string length
 */

int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}


/**
 * *string_nconcat - concatenate two strings
 * @s1: the first string
 * @s2: the second string to concatenate
 * @n: the length
 * Return: a pointer pointed to a new allocated
 *
 * malloc(sizeof(*pointer) * len) : the pointer point to
 *	an array already created
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	int i;
	int j;
	int num;
	int len;

	num = n;
	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	if (num >= _strlen(s2))
		num = _strlen(s2);

	len = _strlen(s1) + num + 1;

	pointer = malloc(sizeof(*pointer) * len);

	if (pointer == O)
		return (NULL);

	for (i = 0; i < _strlen(s1); i++)
		pointer[i] = s1[i];

	for (j = 0; j < num; j++)
		pointer[i + j] = s2[j];

	pointer[i + j] = '\0';

	return (pointer);

}
