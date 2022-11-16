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

	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);

	if (*head == NULL)
		return (NULL);

	temp = (*head)->n;
	current = (*head)->next;
	free(current);

	return (temp);
}
