# include <stdio.h> 
# include "main.h"
/**
  * _isupper - this method will return 1 if c is upper or 0 otherways
  * @c : the char thath will be tested
  *
  * Description: this will return 1 or 0
  * Return: 0 or 1
  */
int _isupper(int c)
{
int x;

if ((c >= 65) && (c <= 90))
x = 1;
else
x = 0;
return (x);
}
