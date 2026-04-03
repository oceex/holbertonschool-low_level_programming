#include <stdio.h>
#include <stdlib.h>
/**
  * string_nconcat - it compain s1 and a n char of s2.
  * @s1: the first string.
  * @s2: the second string.
  * @n: the sesfic amount of s2.
  *
  * Return: returns k or NULL.
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, z = 0;
char *k;
if ((s1 != NULL) && (s1[i] != '\0'))
while (s1[i] != '\0')
i++;
if ((s2 != NULL) && (s2[j] != '\0'))
while (s2[j] != '\0')
j++;
n = (n > j) ? j : n;
k = malloc(sizeof(char) * (i + n + 1));
if (k == NULL)
return (NULL);
for (; z < i; z++)
k[z] = s1[z];
for (; z < (i + n); z++)
k[z] = s2[z - i];
k[z] = '\0';
return (k);
}
