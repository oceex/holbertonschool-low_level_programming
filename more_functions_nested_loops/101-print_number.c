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
unsigned int b;
unsigned int a;
int k = 0;
unsigned int l = 1;
int x = 0;
if (n < 0)
{
_putchar('-');
b = -n;
a = -n;
}
else
b = n;
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
while (a > 0)
{
b = n / l;
_putchar(b + '0');
k++;
a -= b * l;
l /= 10;
}
while (k < x)
{
_putchar('0');
k++;
}
}
