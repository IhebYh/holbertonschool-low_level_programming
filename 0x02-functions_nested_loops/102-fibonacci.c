#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
long int f = 3, i = 0, f1 = 1, f2 = 0;
while (i < 50)
{
f = f1 + f2;
f2 = f1;
f1 = f;
if (i == 49)
printf("%ld", f);
else
printf("%ld, ", f);
i++;
}
printf("\n");
return (0);
}
