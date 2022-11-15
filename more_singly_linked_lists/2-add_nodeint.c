#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a list
 * @head: the list
 * @n: the integer to add
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;

	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);

	if (head == NULL)
		return (NULL);

	current->n = n;
	current->next = NULL;

	if (*head == NULL)
	{
		*head = current;
		return (current);
	}
	current->next = head;
	*head = current;

	return (current);
}
