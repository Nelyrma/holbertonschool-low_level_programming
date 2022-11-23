#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node
 * @head: pointer to the head node
 * @index: index of the node
 * Return: the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		head = head->next;
	}

	if (i == index)
		return (head);
}
