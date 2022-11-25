#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a given position
 * @h: pointer to the pointer's head node
 * @idx: the index of the list where the new node should be added
 * @n: the integer to add
 * Return: the address of the new node, NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	for (i = 0; current && i < idx; i++)
		current = current->next;

	if (!current && i == idx)
		return (add_dnodeint_end(h, n));

	else if (current)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		current->prev->next = new_node;
		new_node->prev = current->prev;
		current->prev = new_node;
		new_node->next = current;
		return (new_node);
	}

	return (NULL);
}
