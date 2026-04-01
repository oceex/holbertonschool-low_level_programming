#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/** malloc_checked - to exit ;> the faul errors.
  * @b: the size the wanted to be allocated.
  *
  * Return: NO return.
  */
void *malloc_checked(unsigned int b)
{
int *k;
k = malloc(b);
if (k == NULL)
exit(98);
return (k);
}
