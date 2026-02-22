#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - this program should know what the LAST DIGIT
  * in the random nomber geven
  * Description: this program should prints the last digit
  * and desid whither if it more than 5 or not
  * Return: 0
  */
int main(void)
{
int n;
int m;

srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;
printf("Last digit of %d is %d and is ", n, m);
if (m == 0)
{
printf("%d\n", m);
}
else if (m > 5)
{
printf("greater than 5\n");
}
else
{
printf("less than 6 and not 0\n");
}
return (0);
}
