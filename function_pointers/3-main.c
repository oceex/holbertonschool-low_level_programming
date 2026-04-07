#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
  * main - this program works as a calculator receve an argumnt
  * from the user and calculate it from the start.
  * @argc: the number of argumant and most be 4 or you will receve an error ;>
  * @argv: this is the array of the argumant and it
  * most contain prognam, num1, operator, num2.
  *
  * Return: 98 or 99 or 100 or 0.
  */
int main(int argc, char *argv[])
{
int (*k)(int, int);
int i = 1, j = 0, z;
char m = argv[1][j], v = argv[argc - 1][j];
if (argc != 4 || m < '0' || m > '9'|| v < '0' || v > '9')
{
printf("Error\n");
return (98);
}
i = atoi(argv[1]);
j = atoi(argv[3]);
k = get_op_func(argv[2]);
if (k == NULL)
{
printf("Error\n");
return (99);
}
z = k(i, j);
if (z == 100)
{
printf("Error\n");
return (100);
}
printf("%d\n", z);
return (0);
}
