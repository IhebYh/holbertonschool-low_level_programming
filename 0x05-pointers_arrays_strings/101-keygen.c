#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return:  0
 */
int main(void)
{
int n = 0, i = 0, r;
srand(time(NULL));
while (n < (2645))
{
r = rand() % 62;
a[i] = r;
n += r;
i++;
}
a[i++] = (2772 - n);
a[i] = '\0';
return (0);
}
