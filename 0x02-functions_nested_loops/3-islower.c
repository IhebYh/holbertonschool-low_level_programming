#include "main.h"
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
