# include <stdio.h>
/**
  * main - this is the starting main and its output the comb of all two digits
  * Description: this program should prints all non-repitied two digits
  * Return: 0
  */
int main(void)
{
int i;
int j;
int k;
int n = 1;

for(i = 0; i <= 8; i++)
{
for(j = i + 1; j <= 9; j++)
{
putchar(i+48);
putchar(j+48);
if (!((i == 8) && (j == 9)))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
