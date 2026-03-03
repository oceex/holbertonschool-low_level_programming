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
char set[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()";
srand(time(NULL));
for (i = 0; i <= s; i++)
printf("%c", set[rand() % 72]);

return (0);
}
