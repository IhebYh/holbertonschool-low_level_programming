#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int r;
r = _isalpha('H');
_putchar(r + '0');
r = _isalpha('o');
_putchar(r + '0');
r = _isalpha(108);
_putchar(r + '0');
r = _isalpha(';');
_putchar(r + '0');
_putchar('\n');
return (0);
}
/**
 * _isalpha - Entry point
 *
 * @c : Char
 *
 * Return: Always 1 (Success)
 */
int _isalpha(char c)
{
char x = 'a';
char X = 'A'
while (x <= 'z')
{
if ((c == x) || (c == X))
return (1);
x++;
X++;
}
return (0);
}
