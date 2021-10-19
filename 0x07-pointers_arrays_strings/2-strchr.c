#include "main.h"
/**
 * _strchr - Locates a character in a string
 *
 * @s: where is the string to locate
 * @c: the string to locate
 *
 * Return: the position of @c in @s
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s != c)
s++;
else
return (s);
}
return ('\0');
}
