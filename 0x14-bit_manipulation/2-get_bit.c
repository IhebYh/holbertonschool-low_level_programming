#include "main.h"
/**
 * get_bit - get bit at a given index
 * @n: long int
 * @index: long int
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (sizeof(n) * 8 < index)
return (-1);
n >>= index;
if ((n & 1) == 1)
return (1);
else
return (0);
}
