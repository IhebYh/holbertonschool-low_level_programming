#include "main.h"

/**
 * isupper - returns 1 if the character is uppercase
 * @c : character
 * Return: 1 or 0
 */

int _isupper(char c)
{
char i;
for (i = 'A'; i < 'Z'; i++)
{
if (c == i)
return (1);
}
return (0);
}
