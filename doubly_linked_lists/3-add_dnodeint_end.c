#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 *	of a linked list
 * @head: pointer to the pointer's head node of a list
 * @n: the integer to add
 * Return: the address of the new element, NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		new_node->next = NULL;
		return (new_node);
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	new_node->next = NULL;
	new_node->prev = tmp;
	tmp->next = new_node;

	return (new_node);
}
