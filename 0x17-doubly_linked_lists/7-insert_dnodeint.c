#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a dlistint_t linked list.
 * @h: Pointer to a pointer to the head node of the linked list.
 * @idx: Index at which the new node should be inserted.
 * @n: Value to be stored in the new node.
 * Return: Pointer to the newly inserted node, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    if (h == NULL)
        return NULL;

    dlistint_t *new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return NULL;

    new->n = n;
    new->prev = NULL;
    new->next = NULL;

    if (idx == 0)
    {
        new->next = *h;
        if (*h != NULL)
            (*h)->prev = new;
        *h = new;
        return new;
    }

    dlistint_t *current = *h;
    unsigned int i = 0;

    while (i < idx - 1 && current != NULL)
    {
        current = current->next;
        i++;
    }

    if (current == NULL)
    {
        free(new);
        return NULL;
    }

    new->next = current->next;
    if (current->next != NULL)
        current->next->prev = new_node;
    current->next = new_node;
    new->prev = current;

    return (new);
}
