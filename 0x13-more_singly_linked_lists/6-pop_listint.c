#include "lists.h"
/**
* pop_listint - pop  a list's head
* @head:listint_t
* Return:void
*/
int pop_listint(listint_t **head)
{
listint_t *tmp;
int n;
tmp = *head;
if (tmp == NULL)
return (0);
*head = tmp->next;
n = tmp->n;
free(tmp);
return (n);
}
