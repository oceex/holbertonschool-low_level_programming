#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
unsigned int i = 0;

if (size == 0)
return (NULL);
arr = malloc(size);
if (arr == NULL)
return (NULL);
for (; i < size; i++)
arr[i] = c;
return (arr);
}
