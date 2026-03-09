#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints an 8x8 chessboard
 * @a: 2D array of characters representing the board
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int i = 0, j = 0;
for (; i < 8; i++)
{
for (j = 0; j < 8; j++)
printf("%c", a[i][j]);
printf("\n");
}
}
