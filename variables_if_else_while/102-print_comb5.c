# include <stdio.h>
/**
  * main - this is the starting main and its output 4 number digit o_0
  * Description: this program should prints all 4 digit numbers
  * Return: 0
  */
int main(void)
{
int i;
int j;
int m;
int n;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
for (m = i; m <= 9; m++)
{
if (m == i)
{
n = j + 1;
}
else
{
n = 0;
}
for (; n <= 9; n++)
{
putchar(i + 48);
putchar(j + 48);
putchar(' ');
putchar(m + 48);
putchar(n + 48);
if (!((n == 9) && (m == i) && (j == (i - 1)) && (i == 9)))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
