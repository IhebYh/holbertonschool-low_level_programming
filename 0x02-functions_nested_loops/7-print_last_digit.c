#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @n : int
 *
 * Return: Always 1 (Success)
 */
int print_last_digit(long n)
{
long x = n;
if (x < 0)
x = -x;
if (x > 10)
{
x %= 10;
}
if ((x < 10) && (x != 0))
{
_putchar(x + '0');
return (x);
}
_putchar('0');
return (0);
}
