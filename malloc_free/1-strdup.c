#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * _strdup - it makes a double str for a spisifec string.
  * @str: the string that we want to make a double from it.
  *
  * Return : returns the new string address or NULL if not.
  */
char *_strdup(char *str)
{
int i = 0, j = 0;
char *x;
if (str == NULL)
return (NULL);
while (str[i] != '\0')
i++;
x = malloc(i);
if (x == NULL)
return (NULL);
for (; j <= i; j++)
x[j] = str[j];
return (x);
}
