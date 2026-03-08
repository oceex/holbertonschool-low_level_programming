#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area to fill
 * @b: constant byte to write
 * @n: number of bytes to fill
 *
 * Description:
 * Writes the byte value b into the first n bytes of the memory
 * area pointed to by s. The function stops after n bytes and
 * returns the pointer to the memory area s.
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
