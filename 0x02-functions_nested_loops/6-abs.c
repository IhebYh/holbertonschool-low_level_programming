#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int r;
r = _abs(-1);
printf("%d\n", r);
r = _abs(0);
printf("%d\n", r);
r = _abs(1);
printf("%d\n", r);
r = _abs(-98);
printf("%d\n", r);
return (0);
}
/**
 * _abs - Entry point
 *
 * @x : int
 *
 * Return: Always 1 (Success)
 */
int _abs(int x)
{
if (x > 0)
{
return (x);
}
else if (x < 0)
{
return (-1 * x);
}
return (0);
}
