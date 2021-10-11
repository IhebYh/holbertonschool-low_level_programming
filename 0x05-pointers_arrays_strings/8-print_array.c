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
while(a[i++])
{
if (i == n)
break;
printf("%d, ", *(a + i));
}
printf("%d\n", *(a + i));
}
