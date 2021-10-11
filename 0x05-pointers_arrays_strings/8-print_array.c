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
for (; i < n - 1; i++)
{
printf("%d, ", *(a + i));
}
printf("%d\n", *(a + i));
}
