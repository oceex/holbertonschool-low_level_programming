# include "main.h"
/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to check.
 *
 * Description:
 * This function determines whether @n is a prime number using recursion.
 * It returns 1 if @n is prime, and 0 otherwise.
 *
 * Return: 1 if prime, 0 if not.
 */
int is_prime_number(int n)
{
if (n <= 0)
return (0);
return (_primi(n, n - 1));
}
/**
 * _primi - Helper function to check primality recursively.
 * @n: The number to check.
 * @i: The current divisor being tested.
 *
 * Return: 1 if prime, 0 if not.
 */
int _primi(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0)
return (0);
return (_primi(n, i - 1));
}
