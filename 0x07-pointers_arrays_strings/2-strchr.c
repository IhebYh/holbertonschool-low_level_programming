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
while (*s != '\0')
{
if (*s == c)
return(s);
*s++;
}
if (c == '\0')
return (s);

return (NULL);
}
