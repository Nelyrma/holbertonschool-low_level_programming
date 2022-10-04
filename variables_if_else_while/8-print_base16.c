#include<stdio.h>

/**
 * main - print hexadecimal base using putchar
 * Return: Always 0
 */

int main(void)
{
	int n = '0';
	char lower_a_to_f = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	while (lower_a_to_f <= 'f')
	{
		putchar(lower_a_to_f);
		lower_a_to_f++;
	}
	putchar('\n');
	return (0);
}
