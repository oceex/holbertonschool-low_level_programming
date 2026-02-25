# include "main.h"
/**
  *  - This function determines whether
  *
  * Description: this program should prints
  * Return: 0
  */
void print_times_table(int n)
{
int i;
int j;
int k;

if ((n <= 15) && (n >= 0))
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
k = i * j;
if (!(j == 0))
{
_putchar(',');
_putchar(' ');
}
if (k > 9)
{
_putchar(' ');
}
if (k > 99)
{
_putchar(' ');
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
_putchar('\n');
}
}
}
