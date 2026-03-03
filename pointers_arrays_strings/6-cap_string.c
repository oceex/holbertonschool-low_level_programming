#include "main.h"

char *cap_string(char *s)
{
int i = 0, j = 0, m = 0, n;
char x[13] ={' ','\t','\n',',',';','.','!','?','"','(',')','{','}'};

while (s[i] != '\0')
i++;
for (; j < i; j++)
{
for (n = 0; n < 13; n++)
if (x[n] == s[j])
m = 1;

}
}
