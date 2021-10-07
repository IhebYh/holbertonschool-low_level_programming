#include "main.h"

/**
 * print_most_numbers - print numbers
 *
 * Return: 1 or 0
 */

void print_most_numbers(void)
{
int i;

for (i = 48; i < 58; i++)
{
if ((i == 51) || (i == 53))
continue;
else
_putchar('i');
}
_putchar('\n');
}
