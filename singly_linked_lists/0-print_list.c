#include "lists.h"

/**
 * print_list - print the elements of a list
 * @h: list to be printed
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;

	if (h->str == NULL)
		printf("[0] (nil)");

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		size++;
		h = h->next;
	}
	return (size);
}
