#include "main.h"

/**
 * *cap_string - capitalize all words of a string
 * @s: the string
 * Return: the value of s
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		else if
		{
			((s[i - 1] == ' ') ||
			(s[i - 1] == '\t') ||
			(s[i - 1] == '\n') ||
			(s[i - 1] == ',') ||
			(s[i - 1] == ';') ||
			(s[i - 1] == '.') ||
			(s[i - 1] == '!') ||
			(s[i - 1] == '?') ||
			(s[i - 1] == '"') ||
			(s[i - 1] == '(') ||
			(s[i - 1] == ')') ||
			(s[i - 1] == '{') ||
			(s[i - 1] == '}') ||
			i == 0)
				s[i] = s[i] - 32;

			i++;
		}
	}
	return (s);
}
