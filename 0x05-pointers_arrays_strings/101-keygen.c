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
char a[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
char pswd[100];
int n = 0, i = 0;
srand(time(NULL));
while (n < (2645))
{
r = rand() % 62;
pswd[i] = a[r];
n = n + pswd[i];
i++;
}
r = 2772 — n;
pswd[i] = r;
return (0);
}
