# include "main.h"
/**
 * print_diagonal - Prints a diagonal line using the '\' character.
 * @n: Number of times the character '\' should be printed.
 *
 * Description: Each '\' is printed on a new line with increasing
 *              indentation to form a diagonal. If n is 0 or less,
 *              only a newline is printed.
 *
 * Return: void
 */

void print_diagonal(int n)
{
int i;
int j;
for (i = 0; i < n ; i++)
{
for (j = 0; j < n ; j++)
{
if (j == i)
{
_putchar('\\');
break;
}
else
_putchar(' ');
}
_putchar('\n');
}
n <= 0 ? _putchar('\n') : i++;
}
