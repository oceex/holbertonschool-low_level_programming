#include <stdio.h>
#include <stdlib.h>
/**
  * free_grid - this method created to free myOld array :<
  * @grid: myArray >:
  * @height: the height of the array.
  *
  * Return: NO return.
  */
void free_grid(int **grid, int height)
{
int i = 0;
for (; i < height; i++)
free(grid[i]);
free(grid);
}
