#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: Pointer to the string to be printed.
 *
 * Description:
 * This function recursively moves to the end of the string, then prints
 * characters on the way back up the call stack, resulting in reversed output.
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
return;
_print_rev_recursion(s + 1);
_putchar(*s);
}

