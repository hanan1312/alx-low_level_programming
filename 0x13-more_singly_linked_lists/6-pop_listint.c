#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer
 * Return: void
 */
int pop_listint(listint_t **head)
{
	listint_t *last;
	int no;

	if (!head || !*head)
		return (0);

	no = (*head)->n;
	last = (*head)->next;
	free(*head);
	*head = last;

	return (no);
}
