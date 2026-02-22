# include <stdio.h>
/**
  * main - this is the starting main and its output the alphabet
  * Description: this program should prints all the alphabet
  * on lowercase AND uppercase
  * Return: 0
  */
int main(void)
{
int i;
for (i = 97; i <= 122; i++)
{
putchar(i);
}
for (i = 65; i <= 90; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
