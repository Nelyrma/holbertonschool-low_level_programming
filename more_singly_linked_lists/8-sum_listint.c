#include "lists.h"

/**
 * sum_listint - return the sum of all the data (n)
 * @head: the linked list
 * Return: 0 if the list is empty, the sum of all data if not
 */

int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	sum += head->n;
	head = head->next;

	return (sum);
}
