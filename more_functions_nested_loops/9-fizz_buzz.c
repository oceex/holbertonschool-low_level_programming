# include <stdio.h>
/**
 * main - Prints Pizz for the multi of 3 and a Buss for a multi of 5 or the number it self.
 * Description: print from 1 to 100
 *
 * Return: void
 */
int main(void)
{
int i;
printf("1");
for (i = 2; i <= 100; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
if (i % 3 == 0)
printf(" Fizz");
if (i % 5 == 0)
i % 3 == 0 ? printf("Buss") : printf(" Buzz");
}
else
printf(" %d", i);
}
return (0);
}
