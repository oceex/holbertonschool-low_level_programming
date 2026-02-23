# include <stdio.h>
/**
  * main - this is the starting main and its output the comb numbers
  * Description: this program should prints all the numbers
  * Return: 0
  */
int main(void)
{
int i;

for (i = 48; i <= 57; i++)
{
if (i >= 49)
{
putchar(',');
putchar(' ');
}
putchar(i);
}
putchar('\n');
return (0);
}
