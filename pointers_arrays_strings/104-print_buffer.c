#include <stdio.h>
#include "main.h"
/**
 * print_buffer - prints a buffer in hex and ascii
 * @b: pointer to buffer
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
int j = 0, i = 0;
char a;
if (size <= 0)
{
printf("\n");
return;
}
while (j < size)
{
for (i = 0; i < 10; j++, i++)
{
if (j % 10 == 0)
printf("%08x: ", j);
printf("%02x", b[j]);
if ((j & 1) == 0)
printf(" ");
}

for (i = j - 10; i < j; i++)
{
if (!((b[j] >= 32) && (b[j] <= 126)))
a = '.';
else
a = b[j];
printf("%c", a);
}
printf("\n");
}
}
