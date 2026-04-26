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
char *val;
unsigned long int index;
hash_node_t *k;
if (key == NULL)
return (0);

if (ht == NULL)
return (0);

if (value == NULL)
val = NULL;
else
{
val = strdup(value);
if (val == NULL)
return (0);
}
index = key_index((const unsigned char *)key, ht->size);
if (ht->array[index] != NULL)
{
k = add_node(ht->array[index], key, val);
if (k == NULL)
return (0);
}
else
{
ht->array[index]->value = val;
ht->array[index]->key = key;
}
return (1);
}

/**
 * add_node - Add a new node to the beginning of a hash node list
 * @head: Pointer to the head pointer of the linked list
 * @key: The key string to store in the new node
 * @value: The value string to store in the new node
 *
 * Description:
 * Allocates a new hash_node_t structure, duplicates the key and value
 * strings, and inserts the node at the start of the linked list. This
 * function is typically used to handle collisions in a hash table by
 * chaining nodes at the same index.
 *
 * Return:
 * A pointer to the newly created node on success.
 * NULL if memory allocation fails or if head/key/value is invalid.
 */
hash_node_t *add_node(hash_node_t *head, const char *key, const char *value)
{
hash_node_t *add;
char *newK;
char *newV;
newK = strdup(key);
if (newK == NULL)
return (NULL);

newV = strdup(value);
if (newV == NULL)
return (NULL);
add = malloc(sizeof(hash_node_t));
if (add == NULL)
{
free(newV);
free(newK);
return (NULL);
}
add->key = newK;
add->value = newV;
head->next = add;

return (add);
}
