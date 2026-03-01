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
int l = 1;
int x = 0;
if (n < 0)
{
_putchar('-');
b = -b;
n = -n;
}
if (n == 0)
_putchar('0');
while (b > 0)
{
b /= 10;
k++;
}
x = k;
k--;
while (k > 0)
{
l *= 10;
k--;
}
while (n > 0)
{
b = n / l;
_putchar(b + '0');
k++;
n -= b * l;
l /= 10;
}
while (k < x)
{
_putchar('0');
k++;
}
}
