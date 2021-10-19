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
int i = 0;
while (*a)
{
_putchar(*a[i]);
if (i == 7)
{
i = 0;
_putchar('\n);
a++;
}
}
}
