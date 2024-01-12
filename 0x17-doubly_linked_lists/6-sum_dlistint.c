#include "lists.h"

/**
 * sum_dlistint - Computes the sum of all the integers in a dlistint_t linked list.
 * @head: Pointer to the head node of the linked list.
 * Return: The sum of the integers in the linked list.
 */
int sum_dlistint(dlistint_t *head)
{
    int sum = 0;

    while (head != NULL)
    {
        sum += head->n;
        head = head->next;
    }

    return (sum);
}
