#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int i = 0;
for (; i < 10; i++)
putchar(i + '0');
for (c = 'a'; c <= 'f'; c++)
putchar(c);
putchar('\n);
return (0);
}
