#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the memory allocated in the function that created new dog
 * @d: variable of type struct dog
 * Return: Always 0
 */

void free_dog(dog_t *d)
{
	free(new_dog->owner);
	free(new_dog->name);
	free(new_dog);

	return (0);
}
