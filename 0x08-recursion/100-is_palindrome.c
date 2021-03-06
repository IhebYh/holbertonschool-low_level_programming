#include "main.h"
/**
 * is_palindrome - entry point
 * @s:char
 * Return:int
 */
int is_palindrome(char *s)
{
int n;
n = _strlen(s) - 1;
return (isPal(s, 0, n));
}
/**
 * isPal - entry point
 * @n:int
 * @s:char
 * @i:int
 * Return:int
 */
int isPal(char *s, int i, int n)
{
if (s[i] != s[n])
return (0);
else if (i >= n)
return (1);
else
return (isPal(s, i + 1, n - 1));
}
/**
 * _strlen - entry point
 * @s:char
 * Return:int
 */
int _strlen(char *s)
{
int i = 0;
if (*s)
{
i++;
i += _strlen(s + 1);
}
return (i);
}
