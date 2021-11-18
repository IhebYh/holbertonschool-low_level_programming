#include "main.h"
/**
 * flip_bits - flipping bits 
 * @n:int
 * @m:int
 * Return:int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int count = 0;
unsigned long int tmp;
tmp = n ^ m;
while (tmp > 0)
{
count++;
tmp &= (tmp-1);
}
return count;
}
