#include "hash_tables.h"

/**
 * hash_table_create - Create a new hash table
 * @size: The number of buckets (array size) to allocate for the table
 *
 * Description:
 * Allocates memory for a hash_table_t structure and its internal array
 * of hash_node_t pointers. Each bucket is initialized to NULL. The size
 * determines how many indices are available for key/value storage.
 *
 * Return:
 * A pointer to the newly created hash table on success.
 * NULL if memory allocation fails or if size is 0.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *newly_hash;
unsigned long int i = 0;
if (size == 0)
return (NULL);

newly_hash = malloc(sizeof(hash_table_t));
if (newly_hash == NULL)
return (NULL);

newly_hash->array = malloc(sizeof(hash_node_t) * size);
if (newly_hash->array == NULL)
{
free(newly_hash);
return (NULL);
}
for (; i < size; i++)
newly_hash->array[i] = NULL;

newly_hash->size = size;

return (newly_hash);
}
