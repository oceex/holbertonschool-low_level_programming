#include <stdio.h>
#include "function_pointers.h"
/**
  * int_index - this func find tha maches num from the cmp fun.
  * @array: the array.
  * @size: the size of the array.
  * @cmp: is the address of the tested func.
  *
  * Return: NO return value.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if ((size <= 0) || (array == NULL) || (cmp == NULL))
return (-1);

for (; i < size; i++)
if (cmp(array[i]))
return (i);

return (-1);
}
