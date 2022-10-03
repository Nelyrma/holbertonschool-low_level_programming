#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int n;
	int m; /* last digit of the number stored in the variable n */

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	m = n % 10;
	if (m > 5)
	{
		printf("Last digit of n is %i and is greater than 5\n", m);
	}
	else if (m == 0)
	{
		printf("Last digit of n is %i and is 0\n", m);
	}
	else if (m < 6)
	{
		printf("Last digit of n is %i and is less than 6 and not 0\n", m);
	}
	return (0);
}
