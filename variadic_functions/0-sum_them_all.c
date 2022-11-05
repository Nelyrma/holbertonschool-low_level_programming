#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int sum, i;

	if (n == 0)
		return (O);

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);

	return (sum);

}
