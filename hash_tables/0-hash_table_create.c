#include "hash_tables.h"

/**
 * hash_table_create - create a new hash table
 * @size: the size of the array
 * Return: pointer to the array
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_hashTable;
	hash_node_t **array;

	if (size == 0)
		return (NULL);

	new_hashTable = malloc(sizeof(hash_table_t));
	if (new_hashTable == NULL)
		return (NULL);

	array = malloc(sizeof(*array) * size);
	if (array == NULL)
	{
		free(new_hashTable);
		return (NULL);
	}

	while (i < size)
	{
		array[i] = NULL;
		i++;
	}

	new_hashTable->size = size;
	new_hashTable->array = array;

	return (new_hashTable);
}
