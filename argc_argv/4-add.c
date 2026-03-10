#include <stdio.h>
#include <stdlib.h>
/**
 * main - Sums all valid integer command-line arguments
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int k = 0, i = 1, n = 0;
int *m;
for (; i < argc; i++)
{
n = strtol(argv[i], &m, 10);
if (m != '\0')
{
printf("Error\n");
return (0);
}
else
k += n;
}
printf("%d\n", k);
return (0);
}
