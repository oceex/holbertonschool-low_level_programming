#include <stdio.h>
#include "main.h"
/**
 * print_buffer - prints a buffer in hex and ascii
 * @b: pointer to buffer
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
int j = 0, i = 0, k;
char a;
if (size <= 0)
{
printf("\n");
return;
}
while (j < size)
{
for (i = 0; (i < 10) && (j < size); j++, i++)
{
if (j % 10 == 0)
printf("%08x: ", j);
printf("%02x", b[j]);
if ((j & 1) == 1)
printf(" ");
else if (j + 1 == size)
printf(" ");
}
k = i;
while (k < 10)
{
printf("  ");
if (k % 2 == 1)
printf(" ");
k++;
}
for (i = j - i; (i < j) && (i < size); i++)
{
if (!((b[i] >= 32) && (b[i] <= 126)))
a = '.';
else
a = b[i];
printf("%c", a);
}
printf("\n");
}
}
