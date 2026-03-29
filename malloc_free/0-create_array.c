#include "main.h"
#include <stdio.h>
/**
  * create_array - creat an array with a spisific size
  * @size: the size of the array
  * @c: the array
  *
  * Return: NULL if fail or the address of the array
  */
char *create_array(unsigned int size, char c)
{
char *arr;
if (size == 0)
return (NULL);
arr = malloc(size);
if (arr == NULL)
return (NULL);
arr[0] = c;
return (&arr);
}
