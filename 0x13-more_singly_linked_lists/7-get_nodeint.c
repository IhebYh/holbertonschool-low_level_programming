#include "lists.h"
/**
* get_nodeint_at - get a node at a given index
* @head:listint_t
* @index:int
* Return:int
*/
int *get_nodeint_at(listint_t *head, unsigned int index)
{
size_t i = 0;
while (i < index)
{
head = head->next;
i++;
}
if (x < index)
return (NULL);
return(head);
}
