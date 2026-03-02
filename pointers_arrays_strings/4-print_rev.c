# include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to the string to be reversed
 *
 * Description: prints characters from the end of the string to the beginning.
 */
void print_rev(char *s)
{
int k =  _strlen(s) - 1;
for (; k > 0; k--)
_putchar(s[k]);
_putchar('\n');
}
