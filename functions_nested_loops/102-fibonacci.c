# include <stdio.h>
/**
  * main - This function will print the fipunacchi sequnse
  * Description: this program should prints
  * Return: 0
  */
int main(void)
{
int i;
int m = 1;
int n = 2;
int tmp;

for (i = 0; i < 50; i++)
{
printf("%d, ",m);
tmp = n + m;
m = n;
n = tmp;
}
return (0);
}
