# include "main.h"
#include <stdlib.h>
/**
  * print_to_98  - This function determines whether
  * @n : the starting number
  *
  * Description: this program should prints
  * Return: void
  */
void print_to_98(int n)
{
int i;
int k;

if (n > 98)
{
for (i = n; i >= 98; i--)
{
k = abs(i);
if (!(i == n))
{
_putchar(',');
_putchar(' ');
}
if (k > 99)
{
_putchar((k / 100) + '0');
k -= 100;
if(k <= 9)
{
_putchar('0');
}
}
if (k > 9)
{
_putchar((k / 10) + '0');
}
_putchar((k % 10) + '0');
}
}
else
{
for (i = n; i <= 98; i++)
{
k = abs(i);
if (!(i == n))
{
_putchar(',');
_putchar(' ');
}
if (i < 0)
{
_putchar('-');
}
if (k > 99)
{
_putchar((k / 100) + '0');
k -= 100;
if (k <= 9)
{
_putchar('0');
}
}
if (k > 9)
{
_putchar((k / 10) + '0');
}
_putchar((k % 10) + '0');
}
}
_putchar('\n');
}

