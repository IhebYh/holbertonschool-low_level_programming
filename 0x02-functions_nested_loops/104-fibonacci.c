#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
long int f = 3, i, f1 = 1, f2 = 0, f1_1, f1_0, f2_1, f2_0, f_1, f_0;
for (i = 0; i < 89; i++)
{
f = f1 + f2;
f2 = f1;
f1 = f;
printf("%ld, ", f);
}
f_1 = f / 1000000000;
f_0 = f % 1000000000;
f1_1 = f1 / 1000000000;
f1_0 = f1 % 1000000000;
f2_1 = f2 / 1000000000;
f2_0 = f2 % 1000000000;
for (i = 89; i < 98; i++)
{
f_1 = (f1_1 + f2_1) % 1000000000;
f_0 = f1_0 + f2_0 + ((f1_1 + f2_1) / 1000000000);
f2_1 = f1_1;
f2_0 = f1_0;
f1_1 = f_1;
f1_0 = f_0;
if (i == 98)
printf("%ld%ld\n", f_1, f_0);
else
printf("%ld%ld, ", f_1, f_0);
}
return (0);
}
