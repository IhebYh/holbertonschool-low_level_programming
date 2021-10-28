#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - entry point
 * Return:int
 */
int main(int argc, char *argv[])
{
char *mul, *r;
if (argc != 2)
{
printf("Error\n");
exit(98);
}
if (_isDigit(argv[1]) * _isDigit(argv[0]) == 0)
{
printf("Error\n")
exit(98);
}
mul = infinite_mul(argv[1], argv[0], char *r, strlen(argv[1]) + strlen(argv[0]);
printf("%s\n",mul);
return (0);  
}
/**
* _isDigit - entry point
* @s1:char
* Return:int
*/
int _isDigit(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= '0' && s[i] <= '9')
continue;
else
return (0);
}
return (1);
}
/**
 * infinite_mul - multiply two numbers
 * @n1:char
 * @n2:char.
 * @r:char
 * @size_r:int
 * Return:char.
 */
char *infinite_mul(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, h, m = 0, n;

for (i = 0; n1[i]; i++)
;
for (j = 0; n2[j]; j++)
;
if (i > size_r || j > size_r)
return (0);
for (i -= 1, j -= 1, k = 0; k < size_r - 1; i--, j--, k++)
{
n = m;
if (i >= 0)
n *= n1[i] - '0';
if (j >= 0)
n *= n2[j] - '0';
if (i < 0 && j < 0 && n == 0)
{
break;
}
m = n / 10;
r[k] = n % 10 + '0';
}
r[k] = '\0';
if (i >= 0 || j >= 0 || m)
return (0);
for (k -= 1, h = 0; h < k; k--, h++)
{
m = r[k];
r[k] = r[h];
r[h] = m;
}
return (r);
}
