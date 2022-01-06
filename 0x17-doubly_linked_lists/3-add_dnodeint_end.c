#include "lists.h"
/**
 * add_dnodeint_end - adding a node
 * @head : dlistint_t
 * @n: int
 * Return: dlist_int or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *new_head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->next = NULL;
		new->n = n;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (new_head->next)
	{
		new_head = new_head->next;
	}
	new_head->next = new;
	new->n = n;
	new->next = NULL;
	new->prev = new_head;
	return (new);
}
