#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies all command-line arguments
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int k = 1, i = 1;
for (; i < argc; i++)
k *= atoi(argv[i]);
if (argc != 3)
printf("Error");
else
printf("%d\n", k);
return (0);
}
