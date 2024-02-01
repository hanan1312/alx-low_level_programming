#include "hash_tables.h"

/**
 * free_node_list - Frees a linked list of nodes.
 * @node: A pointer to the first node in the list.
 */
void free_node_list(hash_node_t *node)
{
    hash_node_t *tmp;

    while (node != NULL)
    {
        tmp = node->next;
        free(node->key);
        free(node->value);
        free(node);
        node = tmp;
    }
}

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i;

    if (ht == NULL)
        return;

    for (i = 0; i < ht->size; i++)
    {
        if (ht->array[i] != NULL)
        {
            free_node_list(ht->array[i]);
        }
    }

    free(ht->array);
    free(ht);
}
