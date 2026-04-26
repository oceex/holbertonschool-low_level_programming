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
unsigned long int hash = 0;

hash += hash_djb2(key);
hash %= size;

return (hash);
}
