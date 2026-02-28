# include <stdio.h>
# include "main.h"
/**
  * _isdigit - this method will return 1 if c is digit or 0 otherways
  * @c : the char thath will be tested
  *
  * Description: this will return 1 or 0
  * Return: 0 or 1
  */
int _isdigit(int c)
{
int x;

if ((c >= 48) && (c <= 57))
x = 1;
else
x = 0;
return (x);
}
