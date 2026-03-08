#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination buffer
 * @src: pointer to the source memory area
 * @n: number of bytes to copy
 *
 * Description:
 * Copies n bytes from the memory area pointed to by src
 * into the memory area pointed to by dest. The function
 * performs a byte‑by‑byte copy and does not handle memory
 * overlap. It returns a pointer to dest.
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
for (; i < n; i++)
dest[i] = src[i];
return (dest);
}
