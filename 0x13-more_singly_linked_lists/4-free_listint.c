#include "lists.h"
/**
* free_listint - free a list
* @head:list_t
* Return:void
*/
void free_listint(listint_t *head)
{
listint_t *n, *checker;
n = head;
while (n != NULL)
{
checker = n->next;
free(n);
n = checker;
}
}
