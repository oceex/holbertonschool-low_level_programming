# include <stdio.h>
/**
  * main - this is the starting main and its output the hex numbers
  * Description: this program should prints all the hex numbaers
  * Return: 0
  */
int main(void)
{
int i;

for (i = 48; i <= 102; i++)
{
if (((i >= 48) && (i <= 57)) || ((i >= 97) && (i <= 102)))
{
putchar(i);
}
}
putchar('\n');
return (0);
}
