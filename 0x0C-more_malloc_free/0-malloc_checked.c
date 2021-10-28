#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - entry point
 * @b:int
 * Return:void
 */
void *malloc_checked(unsigned int b)
{
unsigned int *s;
s = malloc(b);
if (s == NULL)
{
exit(98);
}
else
return (s);
}
