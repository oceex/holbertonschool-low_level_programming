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
int i = 0, j = 0, z = 0, h = 0;
char *adjoin;
int m = 1, n = 1;
if ((s1 == NULL) || (s1[0] == '\0'))
m = 0;
if ((s2 == NULL) || (s2[0] == '\0'))
n = 0;
while ((s1[i] != '\0') && (s2[j] != '\0'))
{
if ((s1[i] != '\0') && (m))
i++;
if ((s2[j] != '\0') && (n))
j++;
}

adjoin = malloc(sizeof(char) * (i + j));
if (adjoin == NULL)
return (NULL);
for (; z < i; z++)
adjoin[z] = s1[z];
for (; z <= j + i; z++, h++)
adjoin[z] = s2[h];
adjoin[z] = '\0';
return (adjoin);
}
