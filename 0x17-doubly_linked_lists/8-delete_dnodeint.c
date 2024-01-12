#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given index in a doubly linked list
 * @head: Double pointer to the head of the list
 * @index: Index of the node to be deleted
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current, *temp;

    if (head == NULL || *head == NULL)
        return -1;

    current = *head;

    if (index == 0)
    {
        *head = (*head)->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return 1;
    }

    for (unsigned int i = 0; i < index; i++)
    {
        if (current == NULL)
            return -1;
        current = current->next;
    }

    if (current == NULL)
        return -1;

    temp = current;

    if (current->prev != NULL)
        current->prev->next = current->next;
    if (current->next != NULL)
        current->next->prev = current->prev;

    free(temp);
    return (1);
}
