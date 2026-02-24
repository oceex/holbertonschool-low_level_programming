# include "main.h"
/**
  * times_table  - This function prints the times table
  *
  * Description: this program should prints the times table
  * Return: void
  */
void times_table(void)
{
int i;
int j;
int v;
int c;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if ((i * j) > 9)
{
v = (i * j) / 10;
_putchar(v + '0');
}
c = (i * j) % 10;
_putchar(c + '0');
if (!(j == 9))
{
_putchar(',');
_putchar(' ');
if ((i * j) <= 9)
{
_putchar(' ');
}
}
}
_putchar('\n');
}
}
