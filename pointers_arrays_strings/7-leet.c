#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: pointer to the string to modify
 *
 * Description:
 * Replaces certain letters in the string with their 1337‑speak
 * equivalents. The mapping used is:
 * A/a → 4, E/e → 3, O/o → 0, T/t → 7, L/l → 1.
 * The function checks both uppercase and lowercase versions
 * using lookup arrays and replaces characters in place.
 *
 * Return: pointer to the modified string s
 */
char *leet(char *s)
{
int i = 0, j = 1;
char k [] = "xA4E3O0T7L1";
char m [] = "xa4e3o0t7l1";
while (s[i] != '\0')
{
for (; j <= 10; j++)
if (((s[i] == k[j]) && (j % 2 != 0)) || ((s[i] == m[j]) && (j % 2 != 0)))
{
s[i] = k[j + 1];
break;
}
i++;
}
return (s);
}
