#include "main.h"
#include <stdio.h>
/**
 * print_multiple - Entry point
 *
 * Return: Always 1 (Success)
 */
void print_multiple(void)
{
int i, s3 = 0, s5 = 0;
for (i = 0; i < 1024; i++)
{
if (i % 3 == 0)
s3 += i;
if (i % 5 == 0)
s5 += i;
}
printf("The sum of all the multiples of 5 below 1024: %d \n", s5);
printf("The sum of all the multiples of 3 below 1024: %d \n", s3);
}
