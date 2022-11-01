#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the memory allocated in the function that created new dog
 * @d: variable of type struct dog
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
