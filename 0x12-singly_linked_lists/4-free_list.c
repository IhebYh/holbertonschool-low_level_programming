#include "lists.h"
/**
* free_list - free a list
* @head:list_t
* Return:void
*/
void free_list(list_t *head)
{
list_t *n;
while (head != NULL)
{
n = head->next;
free(n->str);
free(n);
n = head;
}
}
