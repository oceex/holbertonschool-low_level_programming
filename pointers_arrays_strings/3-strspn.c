#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to search
 * @accept: pointer to the string containing accepted characters
 *
 * Description:
 * Calculates the number of bytes in the initial segment of s
 * which consist only of bytes from accept. The function stops
 * when a character not found in accept is encountered.
 *
 * Return: the number of bytes in the initial segment of s
 * consisting only of characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, j = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (accept[j] == s[i])
break;
j++;
}
if (accept[j] == '\0')
break;
i++;
}
return (i);
}
