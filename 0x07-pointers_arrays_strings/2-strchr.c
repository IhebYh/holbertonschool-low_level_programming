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
unsigned int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
break;
i++;
}
return (s);
}
