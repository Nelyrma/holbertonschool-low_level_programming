#include<stdio.h>

/**
 * main - print numbers from 1 to 100,
 *	  for multiples of 3 print Fizz,
 *	  for multiples of 5 print Buzz,
 *	  for multiples of both 3 and 5 print FizzBuzz
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 0; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((n % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((n % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", n);
		}
	}

	printf("\n");
	return (0);
}
