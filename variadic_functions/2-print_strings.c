#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints numbers followed by a separator and a new line
 * @separator: the string printed between numbers
 * @n: the number of strings passed to the function
 *
 * Description: This function prints all strings provided as variadic
 * arguments. If a separator is provided, it is printed after each string.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list k;
char *m = "";
va_start(k, n);
for (; i < n; i++)
{
m = va_arg(k, char*);
if (m == NULL)
m = "(nil)";

printf("%s", m);

if (separator != NULL && i != n - 1)
printf("%s", separator);

}
va_end(k);
printf("\n");
}
