#include "hash_tables.h"

/**
 * hash_table_delete - Free an entire hash table and all its nodes
 * @ht: Pointer to the hash table to be deleted
 *
 * Description:
 * Iterates through all indices of the hash table array. For each index,
 * the function traverses the linked list stored there, freeing every node
 * along with its allocated key and value strings. After all chains are
 * cleared, the function frees the array itself and finally frees the
 * hash table structure. The function performs no action if @ht is NULL.
 *
 * Return:
 * Nothing. This function does not return a value.
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i = 0;
hash_node_t *tmp;
for(; i < ht->size; i++)
{
if (ht->array[i] == NULL)
continue;

while (ht->array[i])
{
tmp = ht->array[i]->next;
free(ht->array[i]->key);
free(ht->array[i]->value);
free(ht->array[i]);
ht->array[i] = tmp;
}
}
free(ht->array);
free(ht);
}
