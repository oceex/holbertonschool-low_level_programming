# include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Description: processes optional signs, skips whitespace,
 * and builds the integer until a non-digit is found.
 *
 * Return: the converted integer value
 */
int _atoi(char *s)
{
int i = -1;
unsigned int n = 0;
int a = 1;
int b = 1;
int o = 1;
while (s[++i] != '\0')
{
if (((s[i] == '-') || (s[i] == '+')) && (b) && (a))
{
if (s[i] == '-')
o *= -1;
continue;
}
if ((s[i] == ' ') || (s[i] == '\t'))
continue;
if ((s[i] >= '0') && (s[i] <= '9') && (b))
{
a = 0;
n = n * 10 + (s[i] - '0' );
}
else if (a)
continue;
else
b = 0;
}
return (n * o);
}
