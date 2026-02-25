# include <stdio.h>
/**
  * main - This function will print the fipunacchi sequnse
  * Description: this program should prints
  * Return: 0
  */
int main(void)
{
int i;
long m = 1;
long n = 2;
long tmp = 0;

for (i = 0; i < 50; i++)
{
if (i != 49)
{
printf("%ld, ", m);
}
else
{
printf("%ld\n", m);
}
tmp = n + m;
m = n;
n = tmp;
}
return (0);
}
