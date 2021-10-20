#include "main.h"
/**
 * is_palindrome - entry point
 * @s:char
 * Return:int
 */
int is_palindrome(char *s)
{
int n = 0;
if (*s == "")
return (1);
else
while(*s != '\0'){
s++;
n++;
}
return (isPal(*s, 0, n - 1));
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
else if ((s[i] == s[n]) && ( i <= n))
return (isPal(*s, i + 1, n - 1));
else 
return (1);
}
