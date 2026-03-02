# include "main.h"
/**
 * _puts - prints a string followed by a new line
 * @str: pointer to the string to print
 *
 * Description: prints each character of the string using _putchar.
 */
void _puts(char *str)
{
int i = -1;
while (str[i+1] != '\0')
_putchar(str[++i]);

_putchar('\n');
}
