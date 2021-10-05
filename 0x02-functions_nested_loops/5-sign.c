#include "main.h"
/**
 * print_sign - Entry point
 *
 * @n : int
 *
 * Return: Always 1 (Success)
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n == 0)
{
_putchar(n + '0');
}
return (0);
}
