#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char* argv[])
{
int (*k)(int, int);
int i = 1, j = 0, z;
if (argc != 4 || argv[1][j] < '0' || argv[1][j] > '9' || argv[3][j] < '0' || argv[3][j] > '9')
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
return 0;
}
