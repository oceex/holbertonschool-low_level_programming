#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to the string to modify
 *
 * Description:
 * Converts the first letter after any separator into uppercase.
 * Separators include space, tab, newline, period, semicolon,
 * comma, exclamation mark, question mark, double quote,
 * parentheses, and braces. Characters that are not lowercase
 * alphabetic letters remain unchanged.
 *
 * Return: pointer to the modified string s
 */
char *cap_string(char *s)
{
int i = 0, m = 0, n;
char x[13];
x = {' ', '\t', '.', '\n', ';', ',', '!', '?', '"', '(', ')', '{', '}'};
if ((s[0] >= 'a') && (s[0] <= 'z'))
s[0] -= 32;
while (s[i] != '\0')
{
m = 0;
for (n = 0; n < 13; n++)
{
if (x[n] == s[i])
m = 1;
if ((m) &&(n < 4))
m = 2;
}
if ((m % 2 == 0) && (m != 0) && (s[i + 1] >= 'a') && (s[i + 1] <= 'z'))
s[i + 1] -= 32;

i++;
}
return (s);
}
