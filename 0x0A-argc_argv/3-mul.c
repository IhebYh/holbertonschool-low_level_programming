#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc:int
 * @argv:char[]
 * Return:int
 */

int main(int argc, char *argv[])
{
int n, m, mul;
if (argc != 3)
{
printf("Error\n");
return (1);
}
n = atoi(argv[1]);
m = atoi(argv[2]);
mul = n *m;
printf("%d\n", mul);
return (0);
}
