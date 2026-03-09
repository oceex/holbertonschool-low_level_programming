#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to compute the square root of.
 *
 * Description:
 * This function returns the natural square root of @n using recursion.
 * If @n does not have a natural square root, it returns -1.
 *
 * Return: The natural square root, or -1 if none exists.
 */
int _sqrt_recursion(int n)
{
return _sqrt(n, 1);
}
/**
 * find_sqrt - Helper function to find the natural square root.
 * @n: The number to compute the square root of.
 * @i: The current guess.
 *
 * Return: The natural square root, or -1 if none exists.
 */
int _sqrt(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (_sqrt(n, i + 1));
}
