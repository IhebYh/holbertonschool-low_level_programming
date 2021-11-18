#include "main.h"

int _strlen(const char *str);
/**
 * binary_to_uint - from binary to decimal
 * @b:char
 * Return:int or null
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int i = 0, j = 1, len;
int k;
if (b == NULL)
return (0);
len = _strlen(b);
for (k = len - 1; k >= 0; k--)
{
if (b[k] != '0' && b[k] != '1')
return (0);
if (b[k] == '1')
i += j;
j *= 2;
}
return (i);
}
/**
 * _strlen - length of a string
 * @str:string
 * Return:int
 */
int _strlen(const char *str)
{
int i = 0;
for (; str[i] != '\0'; i++)
;
return (i);
}
