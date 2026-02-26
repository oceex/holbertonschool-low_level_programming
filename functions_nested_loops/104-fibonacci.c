# include <stdio.h>
/**
  * main - This function prints the 98th fibonacci numbreesss
  * @a1 : frist term
  * @a2 : secound term
  * @b1 : boolean value to hold the big digit
  * @b2 : boolean value to hold the big digit
  * @t1 : tmp to move the terms
  * @t2 : anouther tmp
  * @i  : to conun the terms
  *
  * Description: this program should prints fibonacciii
  * Return: 0
  */
int main(void)
{
unsigned long a1 = 1, a2 = 2;
unsigned long b1 = 0, b2 = 0;
unsigned long t1, t2;
int i;

for (i = 1; i <= 98; i++)
{
if (b1)
printf("%lu%010lu", b1, a1);
else
printf("%lu", a1);

if (i != 98)
printf(", ");

t1 = a1 + a2;
t2 = b1 + b2 + (t1 < a1);

a1 = a2;
a2 = t1;
b1 = b2;
b2 = t2;
}

printf("\n");
return (0);
}
