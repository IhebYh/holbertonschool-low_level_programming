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
while (i < n - 1)
{
printf("%d, ",*(a + i));
i++;
}
printf("%d\n",*(a + i));
}
