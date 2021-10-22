#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc:int
 * @argv:char[]
 * Return:int
 */

int main(int argc, char *argv[])
{
int i, j, res = 0;
if (argc == 0)
{
printf("0\n");
return (1);
}
for (i = 0; i < argc; i++)
{
for (j = 0; j < strlen(argv[i]); i++)
{
if (!(isdigit(argv[i][j])))
{
printf("Error\n");
return (1);
}
}
res += atoi(argv[i][j]);
}
printf("%d\n", res);
return (0);
}
