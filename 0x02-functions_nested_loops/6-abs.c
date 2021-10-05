#include "main.h"
/**
 * _abs - Entry point
 *
 * @n : int
 *
 * Return: Always 1 (Success)
 */
int _abs(int n)
{
if (n > 0)
{
return (n);
}
else if (n < 0)
{
return (-1 * n);
}
return (0);
}
