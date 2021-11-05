#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - print variadic vars
 * @n:const
 * @separator:char
 * Return:int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list l;
va_start(l, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(l, int));
if (separator != NULL && i != n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(l);
}
