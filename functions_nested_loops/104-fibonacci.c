# include <stdio.h>
/**
  * main - This function prints the 98th fibonacci numbreesss
  * Description: this program should prints fibonacciii
  * Return: 0
  */
int main(void)
{
int i;
unsigned long m = 1;
unsigned long n = 2;
int bon = 0;
unsigned long tmp;

for (i = 0; i < 98; i++)
{
if (i >= 90)
{
if (m > 4000000000)
{
bon++;
m-=4000000000;
}
if (i != 97)
{
if (bon)
{
printf("4%ld, ", m);
bon--;
}
else
{
printf("%ld, ", m);
}
}
}
else
{
if (bon)
{
printf("4%ld", m);
bon--;
}
else
{
printf("%ld", m);
}
}
tmp = m + n;
m = n;
n = tmp;
}
printf("\n");
return (0);
}
