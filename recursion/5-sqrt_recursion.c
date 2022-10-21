#include "main.h"

/**
 * square - check the natural square root of a number
 * @a: the square root
 * @n : the number
 * Return: carree if n have natural square root, -1 if not
 */

int square(int n, int a)
{
	if (a * a > n)
		return (-1);

	if (a * a == n)
		return (a);

	return (square(n, a  + 1));
}

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: the number
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (square(n, 0));
}
