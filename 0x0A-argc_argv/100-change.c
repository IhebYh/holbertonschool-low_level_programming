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
int i, res, n, cents = 0;
int a[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
res = atoi(argv[1]);
if (res < 1)
printf("0\n");
else
{
for (i = 0; i < 5 && res; i++)
{
n = res / a[i];
cents += n;
res -= n *a[i];
}
printf("%d\n", cents);
}
return (0);
}
