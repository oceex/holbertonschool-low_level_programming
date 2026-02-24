# include "main.h"
/**
  * main - this is the starting main and its output the alphabetX10
  * Description: this program should prints all the alphabet on lowercasex10
  * Return: 0
  */
void print_alphabet_x10(void)
{
int i;
int j;

for (i = 0; i < 10; i++)
{
for (j = 97; j <= 122; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
