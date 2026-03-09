#include "main.h"
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
char *r;
if ((*s == '\0') || (s + 1 == '\0'))
return (1);
r = _rev_recursion(s);
return (_comp(s, r));
}
/**
 * _rev_recursion - returns pointer to end of string
 * @s: string
 *
 * Return: pointer to last character
 */
char *_rev_recursion(char *s)
{
if (*s == '\0')
return (s - 1);
return (_rev_recursion(s + 1));
}

/**
 * _comp - compares characters from start and end
 * @a: pointer to start
 * @b: pointer to end
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int _comp(char *a, char *b)
{
if (a >= b)
return (1);
if (*a != *b)
return (0);
return (_comp(a + 1, b - 1));
}
