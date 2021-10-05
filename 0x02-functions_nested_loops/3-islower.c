#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int r;
r = _islower('H');
_putchar(r + '0');
r = _islower('o');
_putchar(r + '0');
r = _islower(108);
_putchar(r + '0');
_putchar('\n');
return (0);
}
/**
 * _islower - Entry point
 *
 * @c : Char
 *
 * Return: Always 1 (Success)
 */
int _islower(char c)
{
char x = 'a';
while (x <= 'z')
{
if (x == c)
return (1);
x++;
}
return (0);
}
