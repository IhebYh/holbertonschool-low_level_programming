#include "main.h"

/**
 * rev_string - entry point
 * @s :char
 * Return:void
 */
void rev_string(char *s)
{
int i, j;
char rev[500];
i = 0;
j = 0;
while (*(s + i))
{
*(rev + i) = *(s + i);
i++;
}
i = i - 1;
while (i >= 0)
{
*(s + i) = *(rev + j);
j++;
i--;
}
}
