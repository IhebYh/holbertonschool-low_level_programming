#include "main.h"
#include<stdlib.h>
/**
 * _strdup - entry point
 * @str:char
 * Return:Null or pointer
 */
char *_strdup(char *str)
{
int i = 0, j = 0;
char *s;
if (str == NULL)
return (NULL);
for (; str[i]; i++)
j++;
s = malloc((j + 1 ) * sizeof(char));
for (i = 0; i < j ; i++)
s[i] = str[i];
s[j] = '\0';
return (s);
}
