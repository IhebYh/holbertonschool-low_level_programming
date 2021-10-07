#include<stdio.h>

/**
 * main - entry point
 *
 * Return: 1 or 0
 */

int main(void)
{
long int i, j, n = 612852475143, isPrime;

for (i = 2; i <= n; i++)
{
if (n % i == 0)
{
isPrime = 1;
for (j = 2; j <= i / 2; j++)
{
if (i % j == 0)
{
isPrime = 0;
break;
}
}
if (isPrime == 1)
printf("%d, ", i);
}
}
printf("/n");
return (0);
}
