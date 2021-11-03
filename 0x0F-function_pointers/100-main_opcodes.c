#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main- entry point
 * @argv:char
 * @argc:int
 * Return:0
 */
int main(int argc, char *argv[])
{
int i = 0, cmp;
unsigned char *p;
p = (unsigned char *) main;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
cmp = atoi(argv[1]);
if (cmp < 0)
{
printf("Error\n");
exit(2);
}
if (cmp > 0)
{
while ( i < (cmp - 1))
printf("%02hhx ", p[i++]);
printf("%hhx\n",p[i]);
}
return (0);
}
