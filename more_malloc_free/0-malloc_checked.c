#include <stdio.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
int *k;
k = malloc(b);
if (k == NULL)
return (98);
return (k);
}
