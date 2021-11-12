#include "lists.h"
/**
* free_list - free a list
* @head:list_t
* Return:void
*/
void free_list(list_t *head)
{
list_t *n, *checker;
n = head;
while (n != NULL)
{
checker = n->next;
free(n->str);
free(n);
n = checker;
}
}
