#include "lists_h"

/**
 * free_list- free a list
 * @head: the list to free
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = NULL;
	}
}
