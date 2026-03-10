#include <stdio.h>
/**
 * main - Prints all command-line arguments
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings containing the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i = 0;
for (; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
