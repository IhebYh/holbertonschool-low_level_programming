#include "main.h"
#include <stdio.h>

/**
 * print_buffer - entry point
 * @b: char
 * @size: int
 * Return:void
 */
void print_buffer(char *b, int size)
{
int i, j;
for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);
for (j = 0; j < 10; j++)
{
if ((i + j) >= size)
printf("  ");
else
printf("%02x", *(b + i + j));
if ((j % 2) != 0 && j != 0)
printf(" ");
}
for (j = 0; j < 10; j++)
{
if ((j + i) >= size)
break;
else if (*(b + j + i) > 30 && *(b + j + i) < 127)
printf("%c", *(b + j + i));
else
printf(".");
}
if (j >= size)
continue;
printf("\n");
}
if (size <= 0)
printf("\n");
}
