#include "hash_tables.h"

/**
 * hash_table_create - create hash table given size
 * @size: size
 * Return: pointer to table; NULL if error
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;
	hash_node_t **array;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
		return (NULL);

	array = malloc(sizeof(*array) * size);
	if (array == NULL)
	{
		free(new_ht);
		return (NULL);
	}

	while (i < size)
	{
		array[i] = NULL;
		i++;
	}

	new_ht->size = size;
	new_ht->array = array;

	return (new_ht);
}
