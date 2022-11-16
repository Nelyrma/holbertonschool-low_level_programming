#include "lists.h"

/**
 * free_listint2 - free a list
 * @head: the list to free
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (*head != NULL)
	{
		while (*head != NULL)
		{
			node = *head;
			*head = (*head)->next;
			free(node);
		}
		*head = NULL;
	}
}
