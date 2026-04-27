#include "hash_tables.h"
/**
 * hash_table_print - Print all key/value pairs in a hash table
 * @ht: Pointer to the hash table to print
 *
 * Description:
 * Iterates through all buckets of the hash table and prints each key/value
 * pair in the format {'key': 'value', ...}. Keys are printed in the order
 * they appear in each linked list. The function does not modify the table.
 * If the hash table is NULL, nothing is printed.
 *
 * Return:
 * Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i = 0;
hash_node_t *tmp;
int v = 0;
printf("{");
for (; i < ht->size; i++)
{
if (ht->array[i] == NULL)
continue;
tmp = malloc(sizeof(hash_node_t));
if (tmp == NULL)
return;
tmp = ht->array[i];
while (tmp)
{
if (v)
printf(", ");

printf("%s: %s", tmp->key, tmp->value);

v = 1;
}
free(tmp);
}
printf("}");
}
