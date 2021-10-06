#include<stdio.h>
/**
 * times_table - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
int f, i = 0, f1 = 1, f2 = 0;
while(i < 48){
f = f1 + f2;
f1 = f - 1;
f2 = f - 2;
printf("%d, ", f);
i++;
}
return (0);
}
