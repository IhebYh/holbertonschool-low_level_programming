#include"main.h"
/**
 * jack_bauer - Entry point
 *
 * Return: Always 1 (Success)
 */
void jack_bauer(void)
{
int i, j, k, h, l, m;
for (i = 0; i < 24; i++)
{
l = i \ 10;
m = i % 10;
for (j = 0; j < 60; j++)
{
k = j \ 10;
h = j % 10;
_putchar(l + '0');
_putchar(m + '0');
_putchar(':');
_putchar(k + '0');
_putchar(h + '0');
_putchar('\n');
}
}
}
