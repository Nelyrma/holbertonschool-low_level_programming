#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table
 * @ht: Hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
