#include "lists.h"

/**
 * print_listint - print all the elements of a list
 * @h: the linked list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	if (h != NULL)
		printf("%d\n", h->n);

	size++;
	h = h->next;

	return (size);
}
