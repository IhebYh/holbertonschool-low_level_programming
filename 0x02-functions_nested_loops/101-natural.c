#include "main.h"
#include <stdio.h>
/**
 * print_multiple - Entry point
 *
 * Return: Always 1 (Success)
 */
void print_multiple(void)
{
int i, s = 0;
for (i = 0; i < 1024; i++)
{
if (i % 3 == 0)
s += i;
if (i % 5 == 0)
s += i;
}
printf("%d \n", s);
}
