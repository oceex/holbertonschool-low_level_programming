#include <stdlib.h>
#include <time.h>
/**  main - this program should deside whether the random number
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
	printf(n);
	if (n>0)
	{
	printf(" is negative\n");
	}
        else if (n>0)
        {
        printf(" is positive\n");
        }
        else
        {
        printf(" is zero\n");
        }
	return (0);
}
