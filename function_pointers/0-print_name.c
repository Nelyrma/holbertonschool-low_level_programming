#include "function_pointers.h"

/**
 * print_name - Print a name
 * @name: char string
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
