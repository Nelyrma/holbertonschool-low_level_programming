#include "lists.h"

/**
 * free_listint - free a list
 * @head: the list
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
