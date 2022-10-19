#include "main.h"
#include <stdio.h>

void main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		_putchar("%s ", argv[0]);
	}
	return (0);
}
