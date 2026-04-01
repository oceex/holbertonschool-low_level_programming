#include <stdio.h>
#include <stdlib.h>
/**
  * alloc_grid - a method that allocate and creat an array of int with 0 amount.
  * @width: the width of the array (colmns).
  * @height: the height of the array (rows).
  *
  * Return: return the 2D array.
  */
int **alloc_grid(int width, int height)
{
int i = 0, j = 0;
int **k;
if ((width <= 0) || (height <= 0))
return (NULL);
k = malloc(sizeof(int *) * (height + 1));
if (k == NULL)
return (NULL);
for (j = 0; j < width; j++)
{
k[j] = (int *) malloc(sizeof(int) * (width + 1));
if (k[j] == NULL)
{
for (i = 0; i < j; i++)
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

