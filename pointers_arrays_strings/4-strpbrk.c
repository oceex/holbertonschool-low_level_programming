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
int i = 0, j = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
return (&s[i]);
j++;
}
i++;
}
return (NULL);
}
