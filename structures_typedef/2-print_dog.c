#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print a struct dog
 * @d: a avriable of type struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	else
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (Nil)\n");

		if (d->age != NULL)
			printf("Age: %d\n", d->age);
		else
			printf("Age: (Nil)\n");

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (Nil)\n");
	}
}
