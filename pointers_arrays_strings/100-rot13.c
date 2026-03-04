#include "main.h"
/**
 * rot13 - encodes a string using ROT13
 * @s: pointer to the string to encode
 *
 * Description:
 * Applies the ROT13 substitution cipher to the string pointed to by s.
 * Letters from 'A' to 'M' and 'a' to 'm' are shifted forward by 13
 * positions, while letters from 'N' to 'Z' and 'n' to 'z' are shifted
 * backward by 13 positions. Non-alphabetic characters remain unchanged.
 *
 * Return: pointer to the encoded string s
 */
char *rot13(char *s)
{
int i = 0;
while (s[i] != '\0')
if (((s[i] >= 'a') && (s[i] <= 'm')) || ((s[i] >= 'A') && (s[i] <= 'M')))
s[i] += 13;
else
s[i] -= 13;
return (s);
}
