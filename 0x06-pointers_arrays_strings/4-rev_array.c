#include "main.h"

/**
 * reverse_array - entry point
 * @a:array
 * @n:int
 * Return:char
 */
void reverse_array(int *a, int n)
{
int tmp, left = 0, right = n - 1;
while (left <= right)
{
tmp = *(a + left);
*(a + left) = *(a + right);
*(a + right) = tmp;
left++;
right--;
}
}
