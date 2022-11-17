#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a linked list
 * @head: the list
 * @index: the index of the node
 * Return: the nth node, NULL if the node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	if (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}
	if (i == index)
		return (head);

	return (NULL);
}
