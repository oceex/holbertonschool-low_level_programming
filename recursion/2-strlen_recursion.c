#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: Pointer to the string whose length is to be measured.
 *
 * Description:
 * This function recursively counts characters until it reaches
 * the null terminator, returning the total length.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (_strlen_recursion(s + 1) + 1);
}
