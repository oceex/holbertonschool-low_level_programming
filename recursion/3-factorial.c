#include "main.h"
/**
 * factorial - Returns the factorial of a given number.
 * @n: The number whose factorial is to be computed.
 *
 * Description:
 * This function computes the factorial of @n using recursion.
 * If @n is negative, it returns -1 to indicate an error.
 *
 * Return: The factorial of @n, or -1 if @n is negative.
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
if (n > 0)
return (n * factorial(n - 1));
}
