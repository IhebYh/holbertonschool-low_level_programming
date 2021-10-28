#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;
if (n >= j)
n = j;
s = malloc(sizeof(char) * (i + n + 1));
if (s == NULL)
return (NULL);
for (k = 0; s1[k] != '\0'; k++)
s[k] = s1[k];
for (l = k; l < (i + n); l++)
s[l] = s2[l - k];
s[l] = '\0';
return (s);
}
