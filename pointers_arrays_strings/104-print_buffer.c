#include <stdio.h>
#include "main.h"
/**
 * print_buffer - prints a buffer in hex and ascii
 * @b: pointer to buffer
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
int j = 0;
if (size <= 0)
{
printf("\n");
return;
}
for (; j < size; j+=10)
{
printf("%8x: %x%x %x%x", j, b[j], b[j + 1], b[j + 2], b[j + 3]);
printf(" %x%x %x%x %x%x ", b[j + 4], b[j + 5], b[j + 6], b[j + 7], b[j + 8], b[j + 9]);
printf("%c%c%c%c%c",  b[j], b[j + 1], b[j + 2], b[j + 3], b[j + 4]);
printf("%c%c%c%c%c\n", b[j + 5], b[j + 6], b[j + 7], b[j + 8], b[j + 9]);
}
}
