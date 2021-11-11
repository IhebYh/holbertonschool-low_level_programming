#include "lists.h"
int _strlen(char *str);
/**
* add_node - adding a node at the beginning
* @head:list_t
* @str:char
* Return:list_t
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
if (str == NULL)
return (NULL);
new = malloc(sizeof(struct list_t));
if (new == NULL)
return (null);
new->str  = strdup(str);
new->len = _strlen(str);
new->next = (*head);
(*head) = new;
return (new);
}
/**
* _strlen - calculate the length of a string
* @str:string
* Return:int
*/
int _strlen(char *str)
{
int i;
while(str)
i++;
return (i);
}