#include "main.h"
/**
 * _strspn - searches a string for any of a set of bytes
 *
 * @s: segment to return bytes from
 * @accept: the bytes to include
 *
 * Return: Returns a pointer to the byte in @s that matches one of the bytes
 * in @accept, or NULL if no such byte is found
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] != 32)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
return (s);
}
}
}
return ('\0');
}
