#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Prints arguments based on a format string
 * @format: A constant list of types of arguments passed to the function
 *
 * Description:
 * This function takes a format string where each character specifies
 * the type of the next variadic argument. Supported format specifiers:
 *  'c' for char
 *  'i' for integer
 *  'f' for float
 *  's' for char * (string)
 *
 * The function prints each argument according to its type, applying
 * proper formatting and separators. If a string argument is NULL,
 * "(nil)" is printed instead.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *m = "";
va_list k;
va_start(k, format);
while (format[i] != '\0')
{
switch (format[i])
{
case 'i':
printf("%d", va_arg(k, int));
break;
case 'c':
printf("%c", va_arg(k, int));
break;
case 'f':
printf("%f", va_arg(k, double));
break;
case 's':
m = va_arg(k, char *);
if (m == NULL)
m = "(nil)"
printf("%s", m);
break;
}
if (format[i + 1] != '\0')
printf(", ");
}
printf("\n");
}

