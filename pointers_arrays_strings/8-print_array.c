# include "main.h"
# include <stdio.h>
/**
 * print_array - prints n elements of an integer array
 * @a: pointer to the array
 * @n: number of elements to print
 *
 * Description: prints elements separated by commas and a space,
 * ending with a newline.
 */
void print_array(int *a, int n)
{
int i;
int j = sizeof(*a) / sizeof(int);
if ((n > j) || (n < 0))
{
printf("\n");
return;
}
for (i = 0; i < n; i++)
if (i != n - 1)
printf("%d, ", a[i]);
else
printf("%d\n", a[n - 1]);
}
