#include <stdio.h>
/**
 * main 
 * Description: this program should prints the sizes of the this types 
 * Return: 0
 */
int main(void)
{
printf("%s%d %s\n%s%d %s\n%s%d %s\n%s%d %s\n%s%d %s\n",
"Size of a char: ", sizeof(char), "byte(s)",
"Size of an int: ", sizeof(int), "byte(s)",
"Size of a long int: ", sizeof(long int), "byte(s)",
"Size of a long long int: ", sizeof(long long int), "byte(s)",
"Size of a float: ", sizeof(float), "byte(s)",
);
return (0);
}
