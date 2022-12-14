#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - perform simple operations
 * @argc: argument counter
 * @argv: argument vector
 * Return: the result of the operation
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(a, b));

	return (0);
}
