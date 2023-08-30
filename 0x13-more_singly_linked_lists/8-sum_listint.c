#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *last = head;

	while (last)
	{
		i += last->n;
		last = last->next;
	}

	return (i);
}
