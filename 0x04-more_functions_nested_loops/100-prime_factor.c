#include<stdio.h>

/**
 * main - entry point
 *
 * Return: 1 or 0
 */

int main(void)
{
long int i = 2, n = 612852475143;

while (i < n)
{
if (n % i == 0)
{
n = n / i;
i = 2;
}
else
i++;
}
printf("%ld", i);
printf("\n");
return (0);
}
