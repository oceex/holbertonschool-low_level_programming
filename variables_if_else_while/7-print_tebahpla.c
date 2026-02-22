# include <stdio.h>
/**
  * main - this is the starting main and its output the alphabet in revers
  * Description: this program should prints all the alphabet on lowercase
  * Return: 0
  */
int main(void)
{
int i;

for (i = 122; i >= 97; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
