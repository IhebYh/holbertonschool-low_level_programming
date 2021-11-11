#include "lists.h"
unsigned int _strlen(char *str);
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
new->next = *head;
*head = new;
return (new);
}
/**
* _strlen - calculate the length of a string
* @str:string
* Return:int
*/
unsigned int _strlen(char *str)
{
int i = 0;
while (str[i] != '\0')
i++;
return (i);
}
