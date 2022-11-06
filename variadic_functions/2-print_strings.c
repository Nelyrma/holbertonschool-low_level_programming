#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings
 * @separator: separator of strings
 * @n: numbers of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *hold;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		hold = va_arg(list, char *);

		if (hold == NULL)
			printf("(nil)");
		else
			printf("%s", hold);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
