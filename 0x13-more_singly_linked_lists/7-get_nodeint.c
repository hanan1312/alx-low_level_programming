#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: node
 * @index: index
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *last = head;

	while (last && i < index)
	{
		last = last->next;
		i++;
	}

	return (last ? last : NULL);
}
