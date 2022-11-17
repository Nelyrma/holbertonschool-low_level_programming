#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: the head of a linked list
 * @idx: the index where the new node should be added
 * @n: the integer to add
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node;
	listint_t *tmp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (head == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node = *head;
		new_node->next = *head;
	}

	tmp = *head;
	while (i < (idx - 1))
	{
		tmp = tmp->next;
		i++;

		if (tmp == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);


}
