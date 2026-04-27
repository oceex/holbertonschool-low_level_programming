#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with a key in a hash table
 * @ht: Pointer to the hash table structure
 * @key: The key string to search for (must not be empty)
 *
 * Description:
 * Computes the index for the given key and searches the linked list at that
 * index for a matching key. If the key is found, the function returns the
 * associated value string. The function does not modify the table or the
 * stored data. Collisions are resolved by traversing the chain at the index.
 *
 * Return:
 * A pointer to the value string if the key is found.
 * NULL if the table is NULL, the key is invalid, or the key is not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t k;
unsigned long int i = 0;
if (ht == NULL)
return (NULL);
k = malloc(sizeof(hash_node_t));
for (; i < ht->size; i++)
{
k = k->array[i];
if (strcmp(k->key, key) == 0)
return (k->value);

while (k)
{
if (strcmp(k->key, key) == 0)
return (k->value);

k = k->next;
}

free(k);
}

return (NULL);
}
