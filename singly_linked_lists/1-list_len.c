#include "lists.h"

/**
 * list_len - return the number of elements
 * @h: the list of elements
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		++len;
		h = h->next;
	}
	return (len);
}
