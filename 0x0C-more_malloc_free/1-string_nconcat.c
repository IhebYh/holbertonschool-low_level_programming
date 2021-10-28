#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - entry point
 * @n:int
 * @s1:char
 * @s2:char
 * Return:void
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i, j, k, l;
for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;
if (n >= j)
{
s = malloc(i + j);
if (s == NULL)
return (NULL);
for (k = 0; s1[k] != '\0'; k++)
s[k] = s1[k];
for (l = 0; s2[l] != '\0'; l++)
s[k + l] = s2[l];
}
else
{
s = malloc(i + n);
if (s == NULL)
return (NULL);
for (k = 0; s1[k] != '\0'; k++)
s[k] = s1[k];
for (l = 0; l < n; l++)
s[k + l] = s2[l];
}
 s[k + l] = '\0';
return (s);  
}
