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

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
_putchar((i * j) + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar('\n');
}
}
