#include "main.h"

/**
 * puts2 - entry point
 * @str :char
 * Return:int
 */
void puts2(char *str)
{
int i, n;
while (str[i++])
{
n++;
}
for (i = 0; i < n; i += 2)
{
_putchar(*(str + i));
}
_putchar('\n');
}
