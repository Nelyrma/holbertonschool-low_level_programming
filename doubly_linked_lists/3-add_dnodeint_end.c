#include "lists.h"

/**
 * add_dnodeint_int - function that adds a new node at the end
 *	of a linked list
 * @head: pointer to the pointer's head node of a list
 * @n: the integer to add
 * Return: the address of the new element, NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

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
		(*head)->prev = new_node;
		(*head)->next = new_node;
		*head = new_node;
	}

	if (*head != NULL)
	{
		(*head)->next = new_node;
		new_node->prev = (*head)->next;
		new_node->next = NULL;
	}

	return (new_node);
}
