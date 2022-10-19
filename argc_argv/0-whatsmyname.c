#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: the argument count
 * @argv: the argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
