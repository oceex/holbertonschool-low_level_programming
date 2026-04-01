#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
int i = 0, j = 0;
int **k;
if ((width <= 0) || (height <= 0))
return (NULL);
k = malloc(sizeof(int *) * height);
if (k == NULL)
return (NULL);
for (j = 0; j < width; j++)
{
k[j] = malloc(sizeof(int) * (width + 1));
if (k[j] == NULL)
{
for (; i < j; i++)
free(k[j]);
free(k);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
k[i][j] = 0;
}
}
return (k);
}

