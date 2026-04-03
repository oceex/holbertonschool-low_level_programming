#include <stdio.h>
#include <stdlib.h>
/**
  * _calloc - this fun should work like exsactly calloc by using malloc.
  * @nmemb: the number of element.
  * @size: the size of each element.
  *
  * Return: the method should returns the address of the
  * allocated memorey or NULL if fails.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i = 0;
char *k;
if ((nmemb == 0) || (size == 0))
return (NULL);
k = malloc(nmemb * size);
if (k == NULL)
return (NULL);
for (; i < nmemb; i++)
k[i] = 0;
return (k);
}
