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
int i = 0, n = 65, k = 13, b = 1, c = 0, d = 0;
while (s[i] != '\0')
{
b = 1, n = 65, k = 13;
for (; (n !=  91) && (b); n += 13, k *= -1)
{
c = (s[i] >= n) && (s[i] <= n + 12);
d = (s[i] >= n + 32) && (s[i] <= n + 44);
if ((c) || (d))
{
s[i] += k;
b = 0;
}
}
i++;
}
return (s);
}
