#include "lists.h"
/**
*insert_nodeint_at_index - inserts a new node at a given position.
*Description: 'print string'
*@head: sep
*@idx: place to add
*@n: number
*Return: void
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *current = *head;
listint_t  *tmp;
unsigned int len = 0;

tmp = malloc(sizeof(listint_t));
if (tmp == NULL)
{
return (NULL);
}
tmp->n = n;
if (*head == NULL)
{
tmp->next = NULL;
*head = tmp;
return (tmp);
}
while (current && len < idx)
{
len++;
current = current->next;
}
if (head == NULL)
{
return (NULL);
}
tmp->next = current->next;
*current = *tmp;
return (tmp);
}
