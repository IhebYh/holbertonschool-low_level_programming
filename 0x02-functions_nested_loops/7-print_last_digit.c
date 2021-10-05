#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @n : int
 *
 * Return: Always 1 (Success)
 */
int print_last_digit(int n)
{
int x = n;
if (x < 0)
x = -1 * x;
while (x > 10)
{
x %= 10;
}
if ((x < 10) && (x != 0))
{
_putchar(x + '0');
return (x);
}
_putchar('0';
return (0);
}
