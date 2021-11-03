#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - entry point
 * @argv:char
 * @argc:int
 * Return:void
 */
int main(int argc, char *argv[])
{
int x, y, res;
int (*test)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
x = atoi(argv[1]);
y = atoi(argv[3]);
test = get_op_func(argv[2]);
if (test == NULL)
{
printf("Error\n");
exit(99);
}
res = test(x, y);
printf("%d\n", res);
return (0);
}
