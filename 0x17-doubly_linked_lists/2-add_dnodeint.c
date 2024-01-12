#include <stdlib.h> 
#include "lists.h"

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/**
 *add_dnodeint - doubly linked list
 *@head: input
 *@n: input
 *Description: doubly linked list node structure
 *Return: dlistint_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->prev = NULL;
new_node->next = *head;
if (*head != NULL)
{
(*head)->prev = new_node;
}
*head = new_node;
return (new_node);
}

