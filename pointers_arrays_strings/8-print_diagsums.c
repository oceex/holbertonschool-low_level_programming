#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix (number of rows/columns)
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i, j;
unsigned int m = 0, n = 0;
for (i = 0; i < size; i++)
for (j = 0; j < size; j++)
{
if (i == j)
m += a[i][j];
if (i + j == size - 1)
n += a[i][j];
}
printf("%ud, %ud", m, n);
}
