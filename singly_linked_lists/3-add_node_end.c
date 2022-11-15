#include "lists.h"

/**
 * add_node_end - add a new node at the end of a list
 * @head: the list of the nodes
 * @str: node to add
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;

	current = malloc(sizeof(list_t));
	if (current == NULL)
		return (NULL);

	if (head == NULL)
		return (NULL);

	current->str = strdup(str);
	current->len = strlrn(str);
	current->next = NULL;

	if (*head == NULL)
		return (current);

	list_t *temp;

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = current;

	return (current);
}
