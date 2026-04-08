#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers followed by a separator and a new line
 * @separator: the string printed between numbers
 * @n: the number of integers passed to the function
 *
 * Description: This function prints all numbers provided as variadic
 * arguments. If a separator is provided, it is printed after each number.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list k;
va_start(k, n);
for (; i < n; i++)
{
printf("%d", va_arg(k, int));
if (separator != NULL)
printf("%s ", separator);
}
va_end(k);
printf("\n");
}
