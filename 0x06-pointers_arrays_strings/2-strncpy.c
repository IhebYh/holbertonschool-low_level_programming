#include "main.h"

/**
 * _strncpy - entry point
 * @dest:char
 * @src:char
 * @n:int
 * Return:char
 */

char *_strncpy(char *dest, char *src, int n)
{
char *s = dest;
int i = 0;
while ((*src != '\0') && (i < n))
{
*dest = *src;
dest++;
src++;
i++;
}
while (i < n)
{
*dest = '\0';
dest++;
i++;
}
return (s);
}
