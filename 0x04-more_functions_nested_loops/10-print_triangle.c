#inlcude "main.h"
/**
 * print_triangle - print triangle
 * @size : int
 */
void print_triangle(int size)
{
int i, j;
if (size > 0)
for (i = 0; i < size; i++)
{
for (j = 0; j < size - i - 1; j++)
{
_putchar(' ');
}
for (j = 0; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
_putchar('\n');
}