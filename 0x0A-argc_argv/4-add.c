#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
return (1);
}
for (i = 1; i < argc; i++)
{
for (j = 0; j < strlen(argv[i]); i++)
{
if (isdigit(argv[i][j]) == 0)
{
printf("Error\n");
return (1);
}
}
res += atoi(argv[i]);
}
printf("%d\n", res);
return (0);
}
