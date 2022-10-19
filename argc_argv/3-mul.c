#include "main.h"
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: the argument count
 * @argv: the argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	int a;
	int b;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = a * b;
	printf("%d\n", mul);
	return (0);

}
