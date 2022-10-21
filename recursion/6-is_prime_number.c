#include "main.h"

/**
 * is_prime - check if a number is prime or not
 * @n: number to check
 * @div: the divisor
 * Return: 1 if n is prime, 0 if not
 */

int is_prime(int n, int div)
{
	if (n == div)
		return (1);

	if (n % div == 0)
		return (0);

	return (is_prime(n, div + 1));
}

/**
 * is_prime_number - check if a number is prime or not
 * @n: the number
 * Return: 1 if the integer is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n % 2 == 0 || n < 2)
		return (0);

	if (n == 2)
		return (1);

	return (is_prime(n, div));
}
