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

	if (size == 0)
		return (NULL);

	new_hashTable = malloc(sizeof(hash_table_t));
	if (new_hashTable == NULL)
		return (NULL);

	new_hashTable->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hashTable->array == NULL)
	{
		free(new_hashTable);
		return (NULL);
	}

	new_hashTable->size = size;

	for (i = 0; i < size; i++)
		new_hashTable->array[i] = NULL;

	return (new_hashTable);
}
