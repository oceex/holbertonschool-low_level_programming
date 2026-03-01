# include "main.h"
/**
 * print_number - prints an integer using _putchar
 * @n: the integer to print
 *
 * Description: This function prints an integer one character at a time using _putchar
 */
void print_number(int n)
{
unsigned int b, a, l = 1;
int k = 0;
int x = 0;
if (n < 0)
{
_putchar('-');
b = -n;
a = -n;
}
else
{
a = n;
b = n;
}
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
b = a / l;
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
