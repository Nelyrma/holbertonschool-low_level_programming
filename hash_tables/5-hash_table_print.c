#include "hash_tables.h"

/**
 *  hash_table_print - Print a hash table
 * @ht: Hash table to print
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	size_t i = 0;
	hash_node_t *tmp = NULL, *tmp1 = NULL;

	if (!ht)
		return;
	printf("{");
	for (; i < ht->size; i++)
	{
		for (tmp = ht->array[i]; tmp; tmp = tmp->next)
		{
			if (tmp1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp1 = tmp;
		}
	}
	printf("}\n");
}
