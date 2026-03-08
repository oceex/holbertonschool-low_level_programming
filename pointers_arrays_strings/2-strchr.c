#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search
 * @c: character to locate
 *
 * Description:
 * Searches the string pointed to by s for the first occurrence
 * of the character c. If found, a pointer to the matching
 * position in the string is returned. If the character is not
 * found, NULL is returned.
 *
 * Return: pointer to the first occurrence of c in s, or NULL
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
return (&s[i]);
i++;
}
if (c == '\0')
return (&s[i]);

return (NULL);
}
