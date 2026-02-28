# include "main.h"
/**
 * print_triangle - prints a right-aligned triangle using the '#' character
 * @size: the height of the triangle
 *
 * Description: If size is greater than 0, the function prints a triangle
 * where each line contains spaces followed by '#' characters, forming a
 * right-aligned shape. If size is 0 or less, the function prints only a
 * newline.
 */
void print_triangle(int size)
{
int i;
int j;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if ((size - 1) - i <= j)
_putchar('#');
else
_putchar(' ');
}
_putchar('\n');
}
size <= 0 ? _putchar('\n') : i++;
}
