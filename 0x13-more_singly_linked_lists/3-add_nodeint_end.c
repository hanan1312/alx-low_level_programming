#include "lists.h"
/**
*add_nodeint_end - start
*Description: 'print string'
*@head: sep
*@n: int
*Return: void
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
/* Allocate memory for the new node */
listint_t *new_node;
istint_t *last_node = *head;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
/* Set the data of the new node */
new_node->n = n;
/* Initialize the next pointer of the new node */
new_node->next = NULL;
/* If the list is empty, make the new node the head */
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
/* Otherwise, find the last node and add the new node after it */
while (last_node->next)
{
last_node = last_node->next;
}
last_node->next = new_node;
return (new_node);
}
