#include "lists.h"

/**
 * list_len - return the number of elements
 * @h: the list of elements
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
