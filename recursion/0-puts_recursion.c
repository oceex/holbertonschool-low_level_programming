#include "main.h"
/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: Pointer to the string to be printed.
 *
 * Description:
 * This function prints the string pointed to by @s, followed by a new line.
 * Despite its name, this implementation is not recursive; it simply calls
 * the helper function _puts.
 */
void _puts_recursion(char *s)
{
_puts(s);
}
