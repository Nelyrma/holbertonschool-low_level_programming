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

	current = malloc(sizeof(list_t));
	if (current == NULL)
		return (NULL);

	if (head == NULL)
		return (NULL);

	current->str = strdup(str);
	current->len = strlen(str);
	current->next = NULL;

	if (*head == NULL)
	{
		*head = current;
		return (current);
	}
	current->next = *head;
	*head = current;

	return (current);
}
