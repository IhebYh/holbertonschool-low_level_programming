#include"main.h"
/**
 * _isalpha - Entry point
 *
 * @c : Char
 *
 * Return: Always 1 (Success)
 */
int _isalpha(int c)
{
if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 92)))
return (1);
return (0);
}
