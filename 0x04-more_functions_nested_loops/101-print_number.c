#include "main.h"

/**
 * print_number - print number
 * @a: first integer
 * Return: 0
 */

void print_number(int n)
{
int r = n;
if (n < 0)
{
_putchar('-');
r= -r;
}
if((r / 10) > 0)
print_number(r / 10);
_putchar(x % 10 + '0');
}
