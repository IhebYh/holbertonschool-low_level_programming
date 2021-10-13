#include "main.h"

/**
 * cap_string - entry point
 * @s:char
 * Return:char
 */

char *cap_string(char *s)
{
int i = 0, j = 0;
char sep[] = " \t\n,;.!?\"(){}";
while (*(s + i) != '\0')
{
if ((*(s + i) >= 'a') && (*(s + i) <= 'z'))
{
if (i == 0)
*(s + i) -= 32;
else
for (j = 0; j < 13; j++)
{
if (sep[j] == *(s + i - 1))
*(s + i) -= 32;
}
}
i++;
}
return (s);
}
