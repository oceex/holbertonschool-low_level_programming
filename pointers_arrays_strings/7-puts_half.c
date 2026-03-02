# include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string to print
 *
 * Description: prints from the middle of the string to the end,
 * followed by a new line.
 */
void puts_half(char *str)
{
int i = -1, j = 0;
while (str[i + 1] != '\0')
i++;
j = i / 2;
for (; j <= i; j++)
_putchar(str[j]);
_putchar('\n');
}
