#include "lists.h"

/**
 * free_listint - free a list
 * @head: the list
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head->n);
		free(head);
		head = head->next;
	}
}
