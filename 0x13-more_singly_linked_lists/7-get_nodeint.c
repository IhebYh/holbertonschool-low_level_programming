#include "lists.h"
/**
* get_nodeint_at - get a node at a given index
* @head:listint_t
* @index:int
* Return:int
*/
int *get_nodeint_at_index(listint_t *head, unsigned int index)
{
size_t i = 0;
while (i < index && head->next)
{
head = head->next;
i++;
}
if (i < index)
return (NULL);
return (head);
}
