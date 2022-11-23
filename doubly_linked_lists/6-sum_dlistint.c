#include "lists.h"

/**
 * sum_dlistint - return the sum of all data (n)
 * @head: pointer to the head node
 * Return: the sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
