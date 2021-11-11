#include "lists.h"
#include <stdio.h>
/**
* print_list - printing linked lists
* @h: list_t
* Return:size_t
*/
size_t print_list(const list_t *h)
{
int i = 0;
const list_t *n = h;
for (; c; i++)
{
if (n->str NULL)
printf("[0] (nil)");
else 
printf("[%d] %s", n->len, n->str);
c = c->next;
}
return (i);
}
