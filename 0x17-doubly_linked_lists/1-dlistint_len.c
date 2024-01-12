#include "lists.h"
/**
 *dlistint_len - doubly linked list
 *@h: input
 *Description: doubly linked list node structure
 *Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
int node_count = 0;

if (h == NULL)
{
return (node_count);
}
while (h->prev != NULL)
{
h = h->prev;
}
while (h != NULL)
{
node_count++;
h = h->next;
}
return (node_count);
}
