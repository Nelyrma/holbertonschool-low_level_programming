#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a linked list
 * @head: the list
 * @index: the index of the node
 * Return: the nth node, NULL if the node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	current = head;

	while (current != NULL)
	{
		if (i == index)
			return (current);

		i++;
		current = current->next;
	}
}
