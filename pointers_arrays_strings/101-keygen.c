#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints a random valid password
 *
 * Return: Always 0.
 */
int main() {
int n = 2772;
int i;
srand(time(NULL));
while (n != 0)
{
i = rand() % 255;
if (i > n)
i = n;
printf("%c", i);
n -= i;
}
return (0);
}
