#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
  long int f = 3, i = 0, f1 = 1, f2 = 0, fe = 0;
while (fe < 4000000)
{
if (f % 2 == 0)
fe += f;
f = f1 + f2;
f2 = f1;
f1 = f;
i++;
}
printf("%ld\n", fe);
return (0);
}
