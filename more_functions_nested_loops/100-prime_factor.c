# include <stdio.h>
/**
 * main - prints the largest factor of the number 612852475143
 *
 * Description: The program iterates downward from the number itself
 * to find the first value that divides it evenly. The first divisor
 * encountered in this reverse loop is the largest factor, which is
 * then printed before the program exits.
 *
 * Return: Always 0.
 */

int main(void)
{
unsigned long n = 612852475143;
unsigned long i;
unsigned long j;
int k;

for (i = n - 1; i > 0; i--)
{
k = 0;
if (n % i ==0)
{
for (j = i; j > 0; j--)
{
if (j % i == 0)
k++;
}
if (k <= 2)
{
printf("%lu\n", i);
break;
}
}
return (0);
}
