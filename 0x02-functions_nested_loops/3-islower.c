#include"main.h"
/**
 * _islower - Entry point
 *
 * @c : Char
 *
 * Return: Always 1 (Success)
 */
int _islower(int c)
{
if ((c >= 97) && (c <= 122))
return (1);
return (0);
}
