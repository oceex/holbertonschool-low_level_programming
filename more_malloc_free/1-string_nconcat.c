#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i = 0, j = 0, z = 0;
char *k;
if (s1 != NULL)
while (s1[i] != '\0')
i++;
else
i = 0;
if (s2 != NULL)
while (s2[j] != '\0')
j++;
else
j = 0;
n = (n > j - 1) && (j )) ? j - 1 : n;
k = malloc(sizeof(int) * (i + n));
for (; z < i; z++)
k[z] = s1[z];
for (; z < i + n; z++)
k[z] = s2[z - i];
k[z] = '\0';
return (k);
}
