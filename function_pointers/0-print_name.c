#include <stdio.h>
#include "function_pointers.h"
/**
  * print_name - this fun call the reseved fun with the name
  * @name: the name.
  * @f: the address of a func.
  *
  * Return: NO return value.
  */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
