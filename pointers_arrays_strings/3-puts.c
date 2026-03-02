# include "main.h"
/**
 * _puts - prints a string followed by a new line
 * @str: pointer to the string to print
 *
 * Description: prints each character of the string using _putchar.
 */
void _puts(char *str)
{
int i;

for (i = 0; i < _strlen(str); i++)
_putchar(str[i]);

}
