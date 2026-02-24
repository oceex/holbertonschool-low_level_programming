# include "main.h"
/**
  * _isalpha - This function determines whether if c is a letter or not
  * @c : this is a int number
  *
  * Description: this program should print 1 for a letter and 0 otherways
  * Return: 0 or 1
  */
int _isalpha(int c)
{
return (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)));
}

