#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: head of linked list.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
