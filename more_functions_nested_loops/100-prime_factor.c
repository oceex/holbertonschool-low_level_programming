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

for (i = n - 1; i > 0; i--)
{
if (n % i == 0)
{
printf("%lu\n", i);
break;
}
}
return (0);
}
