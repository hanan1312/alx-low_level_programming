#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer
 * @index: index
 * Return: 1 
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *start = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(start);
		return (1);
	}

	while (i < index - 1)
	{
		if (!start || !(start->next))
			return (-1);
		start = start->next;
		i++;
	}


	current = start->next;
	start->next = current->next;
	free(current);

	return (1);
}
