#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * infinite_add - adds two numbers stored as strings
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: size of buffer
 *
 * Return: pointer to result, or 0 if result cannot fit
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
char *n;
unsigned long nk1, nk2, k;
int l;

nk1 = strtoul(n1, &n, 10);
nk2 = strtoul(n2, &n, 10);

k = nk1 + nk2;

l = snprintf(NULL, 0, "%lu", k);

if (l + 1 > size_r)
return (0);

snprintf(r, size_r, "%lu", k);

return (r);
}
