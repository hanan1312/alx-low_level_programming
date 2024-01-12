#include "lists.h"
/**
 *print_dlistint - doubly linked list len
 *@h: input
 *Return: count
 */
 size_t dlistint_len(const dlistint_t *h)
 {
    size_t count = 0;

    while (h != NULL)
    {
        count++;
        h = h->next;
    }

    return (count);
}
