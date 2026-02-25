# include <stdio.h>
/**
  * main - This function will print the sum of all even numbers
  * on fepunacci term less than 4m
  * Description: this program should prints the sum
  * Return: 0
  */
int main(void)
{
long  m = 1;
long  n = 2;
long  tmp = 0;
long sum = 0;
while (m <= 4000000)
{
if (m % 2 == 0)
{
sum += m;
}
tmp = m + n;
m = n;
n = tmp;
}
printf("%ld\n", sum);
return (0);
}
