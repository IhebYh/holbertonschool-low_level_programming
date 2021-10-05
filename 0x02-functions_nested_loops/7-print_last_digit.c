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
while (x % 10 != 0)
{
x %= 10;
if (x > 10)
return (x);
}
return (0);
}
