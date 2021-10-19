#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers
 *
 * @a: the name of the array
 * @size: the size of the array
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
int i = 0, n = size - 1;
int diag1 = 0, diag2 = 0;
while (i < size)
{
diag1 += a[i];
diag2 += a[n - i];
i++;
a += size;
}
printf("%d, %d\n", diag1, diag2);
}
