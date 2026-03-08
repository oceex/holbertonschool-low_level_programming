#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring in a string
 * @haystack: the main string to search in
 * @needle: the substring to find
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, j = 0, n = 0;
while (haystack[i] != '\0')
{
if (haystack[i] == *needle)
{
n = i;
j = 0;
while ((haystack[n] == needle[j]) && (needle[j] != '\0'))
{
n++;
j++;
}
if (needle[j] == '\0')
return (&haystack[i]);
}
i++;
}
return (NULL);
}
