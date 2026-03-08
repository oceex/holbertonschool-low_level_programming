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
int i = 0, j = 0, n = 0;
unsigned int k = 0;
while (s[i] != '\0')
i++;
i /= 2;
for (; j < i; j++)
{
n = 0;
while (accept[n] != '\0')
{
if (accept[n] == s[j])
k++;
n++;
}
}
return (k);
}
