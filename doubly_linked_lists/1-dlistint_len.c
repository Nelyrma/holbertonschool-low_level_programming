#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 *	in a linked list
 * @h: pointer to the head node of a linked list
 * Return: number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
