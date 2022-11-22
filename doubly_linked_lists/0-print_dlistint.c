#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of
 *	a doubly linked list
 * @h: pointer to the head node of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);

	for (i = 0; h != NULL; i++)
	{
		printf("%d", h->n);
		h = h->next;
	}
	return (i);
}
