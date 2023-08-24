#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: pointer
 * @str: string
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp_head;
	size_t l;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (l = 0; str[l]; l++)
		;

	new->len = l;
	new->next = NULL;
	tmp_head; = *head;

	if (tmp_head; == NULL)
	{
		*head = new;
	}
	else
	{
		while (tmp_head;->next != NULL)
			tmp_head; = tmp_head;->next;
		tmp_head;->next = new;
	}

	return (*head);
}
