#ifndef F_VARIADIC_H
#define F_VARIADIC_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);
typedef struct print
{
  char *x;
  void (*T_func)(va_list);
} t_print;
#endif
