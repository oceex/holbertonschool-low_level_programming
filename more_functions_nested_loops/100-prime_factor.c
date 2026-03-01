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
unsigned long i = 2;
unsigned long j = 0;
while (n > 1)
{
if (n % i == 0)
{
j = i;
n /= i;
}
else
i++;
}
printf("%lu\n", j);
return (0);
}
