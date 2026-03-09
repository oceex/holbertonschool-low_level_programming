#include "main.h"
/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base integer.
 * @y: The exponent integer.
 *
 * Description:
 * This function computes x raised to the power of y using recursion.
 * If y is negative, it returns -1 to indicate an error.
 *
 * Return: x raised to the power of y, or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
