#include<stdio.h>
/**
 * times_table - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
long int f= 3, i = 0, f1 = 2, f2 = 1;
while(i < 48){
f = f1 + f2;
f2 = f1;
f1 = f;
printf("%ld, ", f);
i++;
}
return (0);
}
