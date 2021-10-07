#include "main.h"

/**
 * _isupper - returns 1 if the character is uppercase
 * @c : character
 * Return: 1 or 0
 */

int _isupper(char c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
