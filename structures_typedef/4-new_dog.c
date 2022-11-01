#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner of the dog
 * Return: pointer to new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	int name_size;
	int owner_size;

	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	name_size = sizeof(name) + 1;
	owner_size = sizeof(owner) + 1;

	new_dog->name = malloc(name_size);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		new_dog->name[i] = name[i];
	new_dog->name[i] = '\0';

	new_dog->age = age;

	new_dog->owner = malloc(owner_size);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; owner[i] != '\0'; i++)
		new_dog->owner[i] = owner[i];
	new_dog->owner[i] = '\0';

	return (new_dog);
}
