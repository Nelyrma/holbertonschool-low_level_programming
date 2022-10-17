#include "main.h"

/**
 * is_prime_number - check if a number is prime or not
 * @n: the number
 * Return: 1 if the integer is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n == 2 || n % 2 != 0)
		return (0);
	if (n % 2 == 0)
		return (is_prime_number(n));
}
