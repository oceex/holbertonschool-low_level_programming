# include "main.h"
/**
 * print_number - prints an integer using _putchar
 * @n: the integer to print
 *
 * Description: This function prints an integer one character at a time
 * using only _putchar. It handles negative numbers and prints digits
 * in the correct order using recursion.
 */
void print_number(int n)
{
int b = n;
int k = 0;
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n == 0)
_putchar('0');
while (b > 0)
{
b /= 10;
k++;
}
k--;
b = 0;
while (n > 0)
{
b = n / 10**k;
_putchar(b + '0');
n -= b * 10**k;
}
}
