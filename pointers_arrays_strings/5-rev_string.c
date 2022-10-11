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
 * rev_string - reverse a string
 * @s : the variable
 * la valeur de j dans l'initialisation est _strlen(s)-1
 * ça enlève le caractère nul qui est à la fin du s
 */

void rev_string(char *s)
{
	int i = 0;
	int j = (_strlen(s) - 1);
	char t;

	while (i < j)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
		i++;
		j--;
	}
}
