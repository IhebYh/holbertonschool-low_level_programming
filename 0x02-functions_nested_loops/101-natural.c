#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
int i, s = 23;
for (i = 10; i < 1024; i++)
{
if (i % 3 == 0)
s += i;
else if (i % 5 == 0)
s += i;
}
printf("%d\n", s);
return (0);
}
