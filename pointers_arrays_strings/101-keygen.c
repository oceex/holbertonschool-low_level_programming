#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints a random password
 *
 * Return: Always 0.
 */

int main() {
int s = rand() % 20;
int i;
srand(time(NULL));
for (i = 0; i <= s; i++)
printf("%c", 32 + (rand() % 95));

return (0);
}
