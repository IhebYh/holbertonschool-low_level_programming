#include "main.h"

/**
 * rev_string - entry point
 * @s :char
 * Return:void
 */
void rev_string(char *s)
{
int i, n;
char *rev;
for (i = 0; s[i] != '\0'; i++)
{
continue;
}
n = i - 1;
for (i = n; i >= n / 2 ; i--)
{
rev = s[i];
s[i] = s[i - n];
s[i - n] = rev;
}
}
