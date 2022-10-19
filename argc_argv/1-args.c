#include "main.h"
#include <stdio.h>

/**
 * main - print the number of arguments
 * @argc: the argument count
 * @argv: the argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc);
	}
	return (0);
}
