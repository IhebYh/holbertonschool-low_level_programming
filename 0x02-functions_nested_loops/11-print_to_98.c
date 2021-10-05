#include "main.h"
/**
 * print_to_98 - Entry Point
 *
 *@n :int
 *
 * Return: Always 0.
 */
int print_to_98(int n)
{
int i, k, l;
if (n > 98)
for (i = n; i >= 98; i--)
{
k = i / 10;
l = i % 10;
_putchar('0' + k);
_putchar('0' + l);
_putchar(',');
_putchar(' ');
}
else
for (i = n; i <= 98; i++)
{
if (i > 10)
{
k = i / 10;
l = i % 10;
_putchar('0' + k);
_putchar('0' + l);
_putchar(',');
_putchar(' ');
}
else
{
_putchar('0' + i);
_putchar(',');
_putchar(' ');
}
}
}
