# include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to the string to be reversed
 *
 * Description: prints characters from the end of the string to the beginning.
 */
void print_rev(char *s)
{
int i = -1;

while (s[i + 1] != '\0')
i++;

for (; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
