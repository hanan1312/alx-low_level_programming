#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *last;

	while (head)
	{
		last = head->next;
		free(head);
		head = last;
	}
}
