#include "lists.h"
/**
 *free_dlistint - doubly linked list
 *@head: input
 *Description: doubly linked list node structure
 *Return: void
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
dlistint_t *next;

while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
}
