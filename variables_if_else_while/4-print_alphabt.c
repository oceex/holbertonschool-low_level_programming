# include <stdio.h>
/**
  * main - this is the starting main and its output the alphabet no q and e
  * Description: this program should prints all the alphabet on lowercase
  * exsept 'q' and 'e'
  * Return: 0
  */
int main(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
if (i == 'q' || i == 'e')
{
continue;
}
else
{
putchar(i);
}
}
putchar('\n');
return (0);
}
