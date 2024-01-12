#include "lists.h"
/**
 *add_dnodeint_end - doubly linked list
 *@head: input
 *@n: input
 *Description: doubly linked list node structure
 *Return: size_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *current, *new = malloc(sizeof(dlistint_t));
unsigned int i;

if (h == NULL)
return (NULL);
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->prev = NULL;
new->next = NULL;
if (idx == 0)
{
new->next = *h;
if (*h != NULL)
{
(*h)->prev = new;
*h = new;
return (new);
}
}
current = *h;
for (i = 0; i < idx - 1; i++)
{
if (current == NULL)
{
free(new);
return (NULL);
}
current = current->next;
}
if (current == NULL)
{
free(new);
return (NULL);
}
new->prev = current;
new->next = current->next;
if (current->next != NULL)
{
current->next->prev = new;
}
current->next = new;
return (new);
}
