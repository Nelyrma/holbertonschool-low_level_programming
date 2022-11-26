#include "hash_tables.h"

/**
 *  hash_table_print - Print a hash table
 * @ht: Hash table to print
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	size_t i = 0;
	hash_node_t *tmp1 = NULL, *tmp2 = NULL;

	if (ht == NULL)
		return;
	printf("{");
	for (; i < ht->size; i++)
	{
		for (tmp1 = ht->array[i]; tmp1; tmp1 = tmp1->next)
		{
			if (tmp2)
				printf(", ");
			printf("'%s': '%s'", tmp1->key, tmp2->value);
			tmp2 = tmp1;
		}
	}
	printf("}\n");
}
