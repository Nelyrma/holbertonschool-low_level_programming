#include "main.h"

/**
 * *string_toupper - change all lowercase letters to uppercase
 * @s: the string to change to uppercase
 * Return: the string
 */

char *string_toupper(char *s)
{
	int i;

	while (s[i]  != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
