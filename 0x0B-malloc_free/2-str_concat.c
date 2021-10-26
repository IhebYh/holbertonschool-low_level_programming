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
int i, j;
char *s;
if (s1 == NULL)
i = 0;
else
for(i = 0; s1[i]; i++)
;
if (s2 == NULL)
j = 0;
else
for (j = 0; s2[j]; j++)
;
s = malloc((i + j + 1) * sizeof(char));
if (s == 0)
return (NULL);
for (i = 0; s1[i]; i++)
s[i] = s1[i];
for (j = i; s2[j]; j++)
s[j] = s2[j - i];
s[j] = '\0';
return (s);
}
