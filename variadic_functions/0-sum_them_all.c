#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: sum of all parameters, or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i = 0;
int m = 0;
va_list k;
if (n == 0)
return (0);
va_start(k, n);
for (; i < n; i++)
m += va_arg(k, int);
va_end(k);
return (m);
}

