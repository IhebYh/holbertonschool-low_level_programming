#include "main.h"
#include<stdlib.h>
/**
 * str_concat - entry point
 * @s1:char
 * @s2:char
 * Return:Null or pointer
 */
char *str_concat(char *s1, char *s2)
{
unsigned int i, j, k;
char *s;
if (s1 == NULL)
i = 0;
else
for (i = 0; s1[i]; i++)
;
if (s2 == NULL)
j = 0;
else
for (j = 0; s2[j]; j++)
;
s = malloc((i + j + 1) * sizeof(char));
if (s == 0)
return (NULL);
for (k = 0; k < i; k++)
s[k] = s1[k];
for (k = 0; k < j; k++)
s[k + i] = s2[k];
s[i + j] = '\0';
return (s);
}
