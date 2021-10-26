#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **argstostr - entry point
 *@ac : int
 *@av : array
 *Return: array
 */
char *argstostr(int ac, char **av)
{
int i, j, k, l, h, m;
char *s;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
k++;
k++;
}
s = malloc((k + 1) * sizeof(char));
if (s == NULL)
return (NULL);
for (l = 0; l < ac; l++)
{
for (h = 0; av[l][h] != '\0'; h++)
{
s[m] = av[l][h];
m++;
}
s[m++] = '\n';
}
s[m] = '\0';
return (s);
}
