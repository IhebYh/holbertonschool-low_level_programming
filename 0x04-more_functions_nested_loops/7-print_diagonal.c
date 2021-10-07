#include "main.h"

/**
 * print_line - print numbers
 *
 *@n : int
 *
 * Return: 1 or 0
 */

void print_line(int n)
{
int i, j;

if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
_putchar('\n');
}
