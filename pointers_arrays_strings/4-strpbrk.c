#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input string to search
 * @accept: bytes to look for
 *
 * Return: pointer to the first occurrence in s of any byte in accept,
 * or NULL if none found
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0, j = 0, k = i;
while (s[i] != '\0')
{
if (s[i] == *accept)
{
k = i;
j = 0;
while ((s[k] == accept[j]) && (accept[j] != '\0'))
{
k++;
j++;
}
if (accept[j] == '\0')
return (&s[i])
}
i++;
}
return (NULL);
}
