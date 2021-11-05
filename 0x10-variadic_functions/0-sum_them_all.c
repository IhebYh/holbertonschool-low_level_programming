#include "variadic_functions.h"
/**
 * sum_them_all - sum of variadic vars
 * @n:const
 * Return:int
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
va_list l;
double sum = 0;
if (n == 0)
{
return (0);
}
va_start(l, n);
for (i = 0; i < n; i++)
{
sum += va_arg(l, int);
}
va_end(l);
return (sum);
}
