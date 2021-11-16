#include "lists.h"
/**
* free_listint2 - free a list
* @head:list_tint
* Return:void
*/
void free_listint2(listint_t **head)
{
listint_t *n;
if (head == NULL)
return;
while (*head)
{
n = *head;
n = (*head)->next;
free(n);
}
head = NULL;
}
