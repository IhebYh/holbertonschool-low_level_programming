#include "main.h"

/**
 * print_array - entry point
 * @a :array
 * @n :int
 * Return:int
 */
void print_array(int *a, int n)
{
int i = 0;
 for(; i < n; i++)
{
printf("%d", *(a + i));
 if (i < (n - 1))
   printf(", ");
}
 printf("\n");
}
