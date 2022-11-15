#include "lists.h"

/**
 * listint_len - return the number of elements in a linked list
 * @h: the linked list
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
