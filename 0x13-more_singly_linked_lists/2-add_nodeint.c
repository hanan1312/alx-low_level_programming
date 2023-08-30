#include "lists.h"
/**
*add_nodeint - start
*Description: 'print string'
*@head: sep
*@n: int
*Return: void
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
  /* Allocate memory for the new node */
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
  	if (new_node == NULL) {
    	return NULL;
  }

  /* Set the data of the new node */
	new_node->n = n;

  /* Set the next pointer of the new node to the current head */
	new_node->next = *head;

  /* Make the new node the new head */
	*head = new_node;
	return (new_node);
}
