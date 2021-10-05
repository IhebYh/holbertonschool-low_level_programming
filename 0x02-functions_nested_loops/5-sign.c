#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int r;
r = print_sign(98);
_putchar(',');
_putchar(' ');
_putchar(r + '0');
_putchar('\n');
r = print_sign(0);
_putchar(',');
_putchar(' ');
_putchar(r + '0');
_putchar('\n');
r = print_sign(0xff);
_putchar(',');
_putchar(' ');
_putchar(r + '0');
_putchar('\n');
r = print_sign(-1);
_putchar(',');
_putchar(' ');
_putchar(r + '0');
_putchar('\n');
return (0);
}
/**
 * print_sign - Entry point
 *
 * @x : int
 *
 * Return: Always 1 (Success)
 */
int print_sign(int x)
{
if (x > 0)
{
_putchar('+');
return (1);
}
else if (x < 0)
{
_putchar('-');
return (-1);
}
else if (x == 0)
{
_putchar(x + '0');
}
return (0);
}
