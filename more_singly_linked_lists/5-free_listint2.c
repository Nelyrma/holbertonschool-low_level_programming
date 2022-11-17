#include "lists.h"

/**
 * free_listint2 - free a list
 * @head: the list to free
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		node = *head;
		*head = node->next;
		free(node->n);
		free(node);
	}
	*head = NULL;
}
