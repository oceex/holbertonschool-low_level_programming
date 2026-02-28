# include "main.h"
/**
  * print_most_numbers - this method will print from 0-9 exsept 2 4
  * Description: this will print 01356789
  * Return: void
  */
void print_most_numbers(void)
{
int i;

for (i = 48; i <= 57; i++)
if ((i != 50) && (i != 52))
_putchar(i);
_putchar('\n');
}

