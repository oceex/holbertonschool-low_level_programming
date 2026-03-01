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
if (n < 0)
{
_putchar('-');
n = -n;
}
while (n > 0)
{
_putchar( n % 10 + '0');
n/=10;
}
}
