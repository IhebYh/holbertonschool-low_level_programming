#include "main.h"
/**
 * factorial - entry point
 * @n:int
 * Return:void
 */

int factorial(int n)
{
if (n > 0)
return (n * factorial(n-1));
if( n == 0)
return 1;
if (n < 0)
return -1;
}
