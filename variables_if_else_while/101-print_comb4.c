# include <stdio.h>
/**
  * main - this is the starting main and its output all three digits number
  * Description: this program should prints all the numbers in 3 digits
  * Return: 0
  */
int main(void)
{
int i;
int j;
int k;

for (i = 0; i <= 9; i++)
{
for (j = i + 1; j <= 9; j++)
{
for (k = j + 1; k <= 9; k++)
{
putchar(i + 48);
putchar(j + 48);
putchar(k + 48);
if (!((k == 9) && (j == (k - 1)) && (i == (j - 1))))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}


