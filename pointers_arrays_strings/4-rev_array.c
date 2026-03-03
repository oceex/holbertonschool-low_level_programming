#include "main.h"

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
