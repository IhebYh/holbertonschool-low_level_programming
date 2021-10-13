#include "main.h"

/**
 * rot13 - entry point
 * @s:char
 * Return:char
 */
char *rot13(char *s)
{
int i = 0, j = 0;
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot_13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
while (*(s + i) != '\0')
{
for (j = 0; j < 52; j++)
{
if (*(s + i) == alphabet[j])
{
*(s + i) = rot_13[j];
break;
}
}
i++;
}
return (s);
}
