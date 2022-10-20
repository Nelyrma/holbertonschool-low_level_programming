#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive numbers
 * @argc: the argument count
 * @argv: numbers
 * Return: 0 if symbols are digit, 1 if not
 */

int main(int argc, char *argv[])
{
	int a = 0;
	int i;
	int j;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; j < argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 0; i < argc; i++)
	{
		a += atoi(argv[i]);
	}
	printf("%d\n", a);
	return (0);
}
