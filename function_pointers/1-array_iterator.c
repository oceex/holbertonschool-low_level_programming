#include <stdio.h>
#include "function_pointers.h"
/**
  * array_iterator - this fun applies of all the array and do the same action.
  * @array: the address of the array.
  * @size: the size of the array.
  * @action: the address of the fun.
  *
  * Return: NO return.
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
for (; i < size; i++)
action(array[i]);
}
