#include "lists.h"
/**
* get_nodeint_at - get a node at a given index
* @head:listint_t
* @index:int
* Return:int
*/
int *get_nodeint_at(listint_t *head, unsigned int index)
{
int i = 0;
while (head)
{
if (i == index)
return (head->n);
head = head->next;
}
return (NULL);
}
