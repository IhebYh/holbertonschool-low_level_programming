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
srand(time(NULL));
sum = 0;
i = 0;
while (sum < (2772–122))
{
r = rand() % 62;
pswd[i] = a[r];
sum = sum + pswd[i];
i++;
}
r = 2772 — sum;
pswd[i] = r;
return (0);
}
