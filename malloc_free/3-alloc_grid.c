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
k = malloc(height * sizeof(int *));
if (k == NULL)
return (NULL);
for (j = 0; j < width; j++)
{
k[j] = malloc(width * sizeof(int));
if (k[j] == NULL)
{
for (i = 0; i < j; i++)
free(k[i]);
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

