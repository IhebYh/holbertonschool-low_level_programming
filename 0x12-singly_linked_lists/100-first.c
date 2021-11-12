#include "main.h"
/**
* tortoise - a function that works before main
* Return : void
*/

void tortoise (void) __attribute__ ((constructor));

void tortoise (void)
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}