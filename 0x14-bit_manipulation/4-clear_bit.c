#include "main.h"
/**
 * clear_bit - clear a bit at a given index
 * @n:int
 * @index:int
 * Return:int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int i = 1;
if (sizeof(n) * 8 < index)
return (-1);
i <<= index;
*n &= ~i;
return (1);
}
