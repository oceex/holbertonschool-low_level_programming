#include "main.h"
/**
 * reverse_array - reverses the content of an integer array
 * @a: pointer to the array of integers
 * @n: number of elements in the array
 *
 * Description:
 * Swaps elements from the beginning and end of the array moving
 * toward the center, effectively reversing the order of the array
 * in place. The function does not return a new array; it modifies
 * the original array directly.
 */
void reverse_array(int *a, int n)
{
int i = 0, j = n - 1;
int tmp;
while (i < j)
{
tmp = a[i];
a[i] = a[j];
a[j] = tmp;
i++;
j--;
}
}
