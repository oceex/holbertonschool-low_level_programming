#include "main.h"
/**
 * _strncpy - copies a string up to n bytes
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 * @n: maximum number of bytes to copy
 *
 * Description:
 * Copies at most n characters from the string pointed to by src
 * into the buffer pointed to by dest. If src is shorter than n
 * characters, the remaining bytes in dest are filled with '\0'.
 * If src is longer than n, no null terminator is added.
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0, b = 1;
for (; n > 0; n--)
{
if (src[i] == '\0')
b = 0;
if (b)
dest[i] = src[i];
else
dest[i] = '\0';
i++;
}
return (dest);
}
