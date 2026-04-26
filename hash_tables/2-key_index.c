#include "hash_tables.h"

/**
 * key_index - Gets the index of a key in a hash table
 * @key: The key used to generate the hash value
 * @size: The size of the hash table array
 *
 * Description: Uses the djb2 hashing algorithm to compute the hash
 * value of the given key, then applies modulo operation to determine
 * the index where the key/value pair should be stored.
 *
 * Return: The computed index for the key within the hash table array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
hash_table_t *hash_table;
size_t len = strlen((const char *)key), i = 0;
unsigned long int hash = 0;
hash_table = malloc(sizeof(hash_table_t));
if (hash_table == NULL)
return (-1);
hash_table = hash_table_create(size);
for (; i < len; i++)
hash += key[i];
hash += hash_djb2(key);
hash %= size;

return (hash);
}
