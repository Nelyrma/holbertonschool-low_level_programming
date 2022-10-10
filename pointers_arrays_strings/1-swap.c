#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a : the first integer
 * @b : the second integer
 */

void swap_int(int *a, int *b)
{
	int temporaire = 0;

	temporaire = *a;
	*a = *b;
	*b = temporaire;
}
