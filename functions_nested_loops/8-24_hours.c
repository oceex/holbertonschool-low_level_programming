# include "main.h"
/**
  * jack_bauer - This function prints the hours and min
  * Description: this program should prints houresss
  * Return: void
  */
void jack_bauer(void)
{
int i;
int j;
int m;
int n;
int k;

for (i = 0; i <= 2; i++)
{
if (i == 2)
{
k = 3;
}
else
{
k = 9;
}
for (j = 0; j <= k; j++)
{
for (m = 0; m <= 5; m++)
{
for (n = 0; n <= 9; n++)
{
_putchar(i + 48);
_putchar(j + 48);
_putchar(':');
_putchar(m + 48);
_putchar(n + 48);
_putchar('\n');
}
}
}
}
}
