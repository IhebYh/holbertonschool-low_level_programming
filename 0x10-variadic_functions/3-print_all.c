#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_c - print char
 * @l:arg
 * Return: void
 */
void print_c(va_list l)
{
printf("%c", va_arg(l, int));
}
/**
 * print_s - print string
 * @l:arg
 * Return: void
 */
void print_s(va_list l)
{
char *s;
s = va_arg(l, char*);
if (s == NULL)
s = "(nil)";
printf("%s", s);
}
/**
 * print_i - print integer
 * @l:arg
 * Return:void
 */
void print_i(va_list l)
{
printf("%i", va_arg(l, int);
}
/**
 * print_f - print integer
 * @l:arg
 * Return:void
 */
void print_f(va_list l)
{
printf("%f", va_arg(l, int);
}
/**
 * print_all - print everything
 * @format:arg
 * Return: void
 */
void print_all(const char * const format, ...)
{
unsigned int i, j;
t_print t[] = {{"c", print_c}, {"s", print_s}, {"i", print_i}, {"f",
print_}, {NULL, NULL}};
va_list valist;
char *s = "";
va_start(valist, format);
i = 0;
while (format && format[i])
{
j = 0;
while (t[j].x != NULL)
{
if (*(t[j].x) == format[i])
{
printf("%s", s);
t[j].T_func(valist);
s = ", ";
break;
}
j++;
}
i++;
}
va_end(valist);
printf("\n");
}
