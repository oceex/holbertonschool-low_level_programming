#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * str_concat - joining two strings in new string.
  * @s1: the first string.
  * @s2: the second string.
  *
  * Return: the new string or NULL.
  */
char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, z = 0, m = 1, n = 1;
char *adjoin;
while (((s1 != NULL) && (s1[i] != '\0')) || ((s2 != NULL) && (s2[j] != '\0')))
{
if ((s1 != NULL) && (s1[i] != '\0') && (m))
i++;
else if ((i == 0) && (s1 != NULL))
m = 0;
if ((s2 != NULL) && (s2[j] != '\0') && (n))
j++;
else if ((j == 0) && (s2 != NULL))
n = 0;
}
adjoin = malloc(sizeof(char) * (i + j - 3));
if (adjoin == NULL)
return (NULL);
for (; z < i; z++)
adjoin[z] = s1[z];
for (; z < j + i; z++)
adjoin[z] = s2[z - i];
return (adjoin);
}
