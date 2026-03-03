#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: pointer to the string to modify
 *
 * Description:
 * Iterates through the string pointed to by s and converts every
 * lowercase alphabetic character ('a' to 'z') into its uppercase
 * equivalent by subtracting 32 from its ASCII value. Characters
 * outside this range remain unchanged.
 *
 * Return: pointer to the modified string s
 */
char *string_toupper(char *s)
{
int i = 0, k = 0;
while (s[i] != '\0')
{
k = s[i];
if ((k >= 'a') && (k <= 'z'))
s[i] = k - 32;
i++;
}
return (s);
}
