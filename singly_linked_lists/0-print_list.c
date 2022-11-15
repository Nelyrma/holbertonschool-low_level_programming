#include "lists.h"

/**
 * print_list - print the elements of a list
 * @h: list to be printed
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t size;

	size = 0;

	if (h == NULL)
		printf("[0] (nil)");

	else if (h != NULL)
	{
		printf("[%d] %s", h->len, h->str);
		h = h->next;
		size++;
	}
	return (size);
}
