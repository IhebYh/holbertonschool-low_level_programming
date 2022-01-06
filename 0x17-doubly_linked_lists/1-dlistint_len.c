#include "lists.h"
/**
 * dlistint_len - printing the length of a doubly linked list
 * @h : dlistint_t *h
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t s = 0;

	while (h->next)
		s++;
	return (s);
}
