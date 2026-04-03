#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - frees a dog struct
 * @d: pointer to dog to free
 *
 * Description: Frees the memory allocated for a dog_t struct,
 * including the name and owner strings. If @d is NULL, nothing
 * is done.
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;
free(d->name);
free(d->owner);
free(d);
}
