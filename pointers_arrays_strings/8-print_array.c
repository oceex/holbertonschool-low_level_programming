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
for (i = 0; i < n - 1; i++)
printf("%d, ", a[i]);
printf("%d\n", a[n - 1]);
}
