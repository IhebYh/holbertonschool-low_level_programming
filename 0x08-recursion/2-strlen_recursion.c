#include "main.h"
/**
 * _puts_recursion - entry point
 * @s:char
 * Return:void
 */

int _strlen_recursion(char *s)
{
if (*s != '\0')
return 1 + _strlen_recursion(s + 1);
}
