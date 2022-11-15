#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list
 * @head: list of nodes
 * @str: node to add
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *current;

	current = malloc(sizeof(*current));
	if (current == NULL)
		return (NULL);

	current->str = strdup(str);
	current->len = strlen(str);

	if (*head == NULL)
		current->next = NULL;
	else
	{
		current->next = *head;
		*head = current
	}
	return (current);
}
