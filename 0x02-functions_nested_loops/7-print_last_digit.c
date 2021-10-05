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
int x, y;
x = n % 10;
if (x < 0)
{
x = -x;
}
y = '0' + x;
_putchar(y);
return (y);
}
