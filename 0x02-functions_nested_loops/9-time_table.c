#include"main.h"
/**
 * times_table - Entry point
 *
 * Return: Always 1 (Success)
 */
void times_table(void)
{
int i, j, k;
while ((i < 9) && (j < 9))
{
k = 0;
for (i = 0; i < 9 ; i++)
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
