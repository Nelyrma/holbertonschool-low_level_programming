#include<stdio.h>

/**
 * main - print numbers of base 10
 * Return: Always 0
 */

int main(void)
{
	int n;

	while (n < 10)
	{
		printf("%i", n);
		n++;
	}
	putchar('\n');
	return (0);
}
