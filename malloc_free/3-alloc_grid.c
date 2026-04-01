#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
int i = 0, j = 0;
int **k;
if ((width <= 0) || (height <= 0))
return (NULL);
k = malloc(sizeof(int) * (width * height));
if (k == NULL)
return (NULL);
for (; i < height; i++)
{
for (; j < width; j++)
{
k[i][j + height] = 0;
}
}
return (k);
}

