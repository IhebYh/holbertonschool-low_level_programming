#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_alphabet_x10();
return (0);
}
/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always 0.
 */
int print_alphabet_x10(void)
{
char c = 'a';
int i = 0;
for (; i < 10; i++)
{
for (; c < 'z'; c++)
_putchar(c);
_putchar('\n');
}
return (0);
}
