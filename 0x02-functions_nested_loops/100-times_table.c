#include"main.h"
/**
 * print_times_table - Entry point
 *@n : int
 * Return: Always 1 (Success)
 */
void print_times_table(int n)
{
int i, j, k;
while ((i <= n) && (j <= n))
{
k = 0;
for (i = 0; i < n ; i++)
{
k += j;
_putchar(k + '0');
_putchar(',');
_putchar(' ');
}
_putchar(k + '0');
_putchar('$');
j++;
_putchar('\n');
}
}
