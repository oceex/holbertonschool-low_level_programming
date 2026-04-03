#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i = 0;
int *k;
if ((nmemb == 0) || (size == 0))
return (NULL);
k = malloc(nmemb * size);
if (k == NULL)
return (NULL);
for (; i < nmemb; i++)
k[i] = 0;
return (k);
}
