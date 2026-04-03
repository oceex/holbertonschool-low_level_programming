#include <stdio.h>
#include <stdlib.h>
/**
  * array_range - creats an array of int that contains min - max.
  * @min: the k[0] value.
  * @max: the k[max - min] value.
  *
  * Return : return the address of the array or NULL.
  */
int *array_range(int min, int max)
{
int *k, i;
if (min > max)
return (NULL);
k = malloc(sizeof(int) * (max - min + 1));
if (k == NULL)
return (NULL);
for (i = 0; i < (max - min + 1); i++);
k[i] = min + i;
return (k);
}
