#include "main.h"

/**
 * puts_half - entry point
 * @str :char
 * Return:int
 */
void puts_half(char *str)
{
int i = 0, n = 0;
while (str[i++])
n++;
i = (n / 2);
if (n % 2)
i++;
for (; i < n; i++)
{
_putchar(*(str + i));
}
_putchar('\n');
}
