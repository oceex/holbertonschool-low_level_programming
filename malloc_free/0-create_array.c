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
if (size == 0)
return (NULL)
c = malloc(size);
if (c == NULL)
return (NULL);
return (&c);
}
