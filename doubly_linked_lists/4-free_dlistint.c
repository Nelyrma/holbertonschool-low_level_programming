#include "lists.h"

/**
 * free_dlistint - function that frees a list
 * @head: pointer to the address of the head node
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head->next);
		free(head);
		free(head->prev);
	}
}
