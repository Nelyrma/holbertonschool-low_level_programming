#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at a given position
 * @head: pointer to the pointer's head node
 * @index: the index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;

	if (head == NULL)
		return (-1);

	if (*head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}

	while ((index != 0) && (tmp->next != NULL))
	{
		index -= 1;
		tmp = tmp->next;
	}

	if (index == 0)
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;
		free(tmp);
		return (1);
	}

	return (-1);
}
