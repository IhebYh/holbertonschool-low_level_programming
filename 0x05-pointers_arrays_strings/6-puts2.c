#include "main.h"

/**
 * _puts2 - entry point
 * @str :char
 * Return:int
 */
void _puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
