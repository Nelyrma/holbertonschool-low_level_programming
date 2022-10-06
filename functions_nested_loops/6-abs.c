#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * @n : the  integer
 * Return: the absolute value
 */

int _abs(int n)
{
	int absolute_value = n * ((n > 0) - (n < 0));

	return (absolute_value);
}
