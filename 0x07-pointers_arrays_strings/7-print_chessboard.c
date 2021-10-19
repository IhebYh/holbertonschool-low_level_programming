#include "main.h"
/**
 * print_chessboard - prints the chessboard
 *
 * @a: the row of the array
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
int i = 0, j = 0;
while (i < 8)
{
while (j < 8)
{
putchar(a[i][j]);
j++;
}
j = 0;
i++;
if (i < 8)
putchar('\n');
}
}
