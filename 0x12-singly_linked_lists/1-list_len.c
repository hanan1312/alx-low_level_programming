#include "lists.h"
/**
 * list_len - returns then number of elements in a list.
 * @h: linked list.
 * Return: number.
 */

size_t list_len(const list_t *h)
{
	size_t no_elem;

	no_elem = 0;
	while (h != NULL)
	{
		h = h->next;
		no_elem++;
	}
	return (no_elem);
}
