# include "main.h"
/**
  * print_sign - This function determines the sign of the given number n
  * @n : the the number tested
  *
  * Description: this program should prints - or + or 0
  * Return: 0 or 1 or -1
  */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
}
else if (n == 0)
{
_putchar('0');
}
else
{
_putchar('-');
}
return ((n == 0) ? (0) : (n > 0) ? (1) : (-1));
}
