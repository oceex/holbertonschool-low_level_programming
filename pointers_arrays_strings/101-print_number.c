#include "main.h"
/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to print
 *
 * Description: This function prints an integer one digit at a time
 * without using arrays, pointers, or recursion. It handles negative
 * numbers by printing a leading '-' before processing the digits.
 */
void print_number(int n)
{
unsigned int m = 0, x = 1;
if (n < 0)
{
m = -n;
_putchar('-');
}
else
m = n;
while (m / x >= 10)
x *= 10;
while (x > 0)
{
_putchar(m / x + '0');
m %= x;
x /= 10;
}
}
