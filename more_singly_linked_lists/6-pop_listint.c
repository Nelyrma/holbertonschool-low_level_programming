#include "lists.h"

/**
 * pop_listint - delete the head node of a linked
 * @head: the linked list
 * Return: 0 if the list is empty, the head node’s data (n) if not
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int temp;

	if (*head == NULL)
		return (0);

	current = *head;
	temp = (*head)->n;
	*head = (*head)->next;
	free(current);

	return (temp);
}
