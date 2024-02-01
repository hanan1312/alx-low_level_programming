#include "hash_tables.h"

/**
 * key_index - Get index
 * @key: key to get the index of.
 * @size: size of the array of the hash table.
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
