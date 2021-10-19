#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: segment to return bytes from
 * @accept: the bytes to include
 *
 * Return: Returns a pointer to the byte in @s that matches one of the bytes
 * in @accept, or NULL if no such byte is found
 */

unsigned int _strpbrk(char *s, char *accept)
{
int j;
while (*s)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (*s == accept[j])
return (s);
}
s++;
}
return ('\0');
}
