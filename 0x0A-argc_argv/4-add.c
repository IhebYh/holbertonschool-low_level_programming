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
int i, ret;
char str[10];
char *ptr;
if (argc != 0)
{
printf("0\n");
return (1);
}
for(i = 0; i < argc; i++)
{
ret += strtol(str, &ptr, 10);
if (strlen(ptr) > 0)
{
printf("Error");
return (1);
}
}
printf("%d\n",ret);
return (0);
}
