#include "main.h"

/**
 * _puts - entry point
 * @s :char
 * Return:int
 */
void _puts(char *s)
{
int i, n;
for (i = 0; s[i] != '\0'; i++)
{
continue;
}
n = i - 1;
for (i = n; i >= 0 ; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
