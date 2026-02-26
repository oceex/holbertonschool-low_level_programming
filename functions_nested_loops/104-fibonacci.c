# include <stdio.h>
/**
  * main - This function prints the 98th fibonacci numbreesss
  * @a : frist term
  * @b : secound term
  * @naxt : boolean value to hold the big digit
  * @a_head : boolean value to hold the big digit
  * @a_tail : tmp to move the terms
  * @b_head : anouther tmp
  * @b_tail  : to conun the terms
  * @next_head  : to conun the terms
  * @next_tail : to conun the terms
  * @base : the 1 trilun
  * @i : contintg
  *
  * Description: this program should prints fibonacciii
  * Return: 0
  */
int main(void)
{
int i;
unsigned long a = 1, b = 2, next;
unsigned long a_head, a_tail, b_head, b_tail;
unsigned long next_head, next_tail;
unsigned long base = 1000000000;
printf("%lu, %lu", a, b);
for (i = 3; i <= 92; i++)
{
next = a + b;
printf(", %lu", next);
a = b;
b = next;
}
a_head = a / base;
a_tail = a % base;
b_head = b / base;
b_tail = b % base;
for (; i <= 98; i++)
{
next_head = a_head + b_head;
next_tail = a_tail + b_tail;
if (next_tail >= base)
{
next_tail -= base;
next_head++;
}
printf(", %lu%09lu", next_head, next_tail);
a_head = b_head;
a_tail = b_tail;
b_head = next_head;
b_tail = next_tail;
}
printf("\n");
return (0);
}
