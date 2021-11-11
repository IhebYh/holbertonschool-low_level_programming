#include "lists.h"
/**
* add_node - adding a node at the beginning
* @head:list_t
* @str:char
* Return:list_t
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *last = *head;
if (str == NULL)
return (NULL);
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str  = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
new->len = _strlen(new->str);
new->next = NULL;
if (*head == NULL)
{
*head = NULL;
return (NULL);
}
while (last->next != NULL)
*last = last->next;
last->next = new
return (new);
}

