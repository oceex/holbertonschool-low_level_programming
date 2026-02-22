#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *  main - this program should deside whether the random number
  *  is pos or nig or zero.
  * Descption: prints negative if it - and positive\n if it + and zero if it 0
  * AND
  * Return : (0)
  */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n > 0)
{
printf("%d is positive\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
