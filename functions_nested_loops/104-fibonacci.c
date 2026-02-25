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
unsigned long tmp;

for (i = 0; i < 98; i++)
{
if (i != 97)
{
printf("%ld, ", m);
}
else
{
printf("%ld", m);
}
tmp = m + n;
m = n;
n = tmp;
}
printf("\n");
return (0);
}
