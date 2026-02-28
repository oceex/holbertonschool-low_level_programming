# include "main.h"
/**
  * more_numbers  - this method will print from 0-14 10 times
  * Description: this will print 01234567891011121314 *10
  * Return: void
  */
void more_numbers(void)
{
int i;
int j;
int x;

for (j = 0; j <= 9; j++)
{
for (i = 0; i <= 14; i++)
{
x = i > 9 ? i - 10 : i;
if (i >= 10)
_putchar('1');
_putchar(x + 48);
}
_putchar('\n');
}
}
