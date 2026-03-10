#include <stdlib.h>
#include <stdio.h>
/**
 * main - Calculates the minimum number of coins for change
 * @argc: Number of arguments
 * @argv: Array of argument string
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int n, k = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (atoi(argv[1]) < 0)
{
printf("0\n");
return (0);
}
n = atoi(argv[1]);
while (n > 0)
{
if (n >= 25)
n -= 25;
else if (n >= 10)
n -= 10;
else if (n >= 5)
n -= 5;
else if (n >= 2)
n -= 2;
else if (n == 1)
n--;
k++;
}
printf("%d\n", k);
return (0);
}
