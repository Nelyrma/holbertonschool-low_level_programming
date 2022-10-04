#include<stdio.h>

/**
 * main - print the alphabet in reverse
 * Return: Always 0
 */

int main(void)
{
	char lower = 'z';

	while (lower <= 'a')
	{
		putchar(lower);
		lower--;
	}
	return (0);
}
