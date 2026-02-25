/**
  * sumMulti_5_3  - This function sum all the numbers that containts 5 or 3
  *
  * Description: this program should prints the sum of all numbers that containts 3 or 5 bellow 1024
  * Return: void
  */
void sumMulti_5_3(void)
{
int i;
int k = 0;

for (i = 1023; i > 0; i--)
{
if (i % 5 == 0)
{
k += i;
}
else if (i % 3 == 0)
{
k += i;
}
}
printf("%d\n",k);
}
