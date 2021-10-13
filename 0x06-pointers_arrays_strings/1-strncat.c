#include "main.h"

/**
 * _strncat - entry point
 * @dest:char
 * @src:char
 * @n:int
 * Return:char
 */

char *_strncat(char *dest, char *src, int n)
{
char *s = dest;
int i = 0;
while (*dest != '\0')
{
dest++;
}
while ((*src != '\0') && (i < n))
{
*dest = *src;
dest++;
src++;
i++;
}
*dest = '\0';
return (s);
}
