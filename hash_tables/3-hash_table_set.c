#include "hash_tables.h"
/**
 * hash_table_set - Insert or update a key/value pair in a hash table
 * @ht: Pointer to the hash table structure
 * @key: The key string (must not be empty)
 * @value: The value associated with the key
 *
 * Description:
 * Computes the index for the given key and inserts a new node into the
 * corresponding bucket. If the key already exists in the table, its value
 * is replaced with a newly duplicated string. Collisions are handled by
 * adding nodes to the beginning of the linked list at the index.
 *
 * Return:
 * 1 on success.
 * 0 on failure (NULL table, NULL/empty key, memory allocation failure).
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *j, *k;
char *val, *ke;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);

index = key_index((const unsigned char *)key, ht->size);
j = ht->array[index];

while (j)
{
if (strcmp(j->key, key) == 0)
{
val = strdup(value);
if (val == NULL)
return (0);

free(j->value);
j->value = val;
return (1);
}
j = j->next;
}

ke = strdup(key);
if (ke == NULL)
return (0);

val = strdup(value);
if (val == NULL)
{
free(ke);
return (0);
}

k = malloc(sizeof(hash_node_t));
if (k == NULL)
{
free(ke);
free(val);
return (0);
}

k->key = ke;
k->value = val;
k->next = ht->array[index];
ht->array[index] = k;

return (1);
}
