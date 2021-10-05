#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_alphabet();
return (0);
}
/**
 * print_alphabet - check the code
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
char c = 'a';
for (; c < 'z'; c++)
_putchar(c);
_putchar('\n');
return (0);
}
