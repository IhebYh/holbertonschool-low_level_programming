#include "main.h"
/**
 * is_prime_number - entry point
 * @n:int
 * Return:void
 */
int is_prime_number(int n)
{
if (n < 1)
return (1);
else
return (prime_checker(2,n));
}

/**
 * prime_checker - entry point
 * @n:int
 * @p:int
 * Return:int
 */
int prime_checker(int p, int n)
{
if (p < (n / 2))
{
if (n % p != 0)
prime_checker(p + 1, n);
else
return (1);
}
else
return (0);
}
