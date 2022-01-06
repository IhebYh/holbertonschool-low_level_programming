#include "lists.h"
/**
 * dlistint_len - printing the length of a doubly linked list
 * @h : dlistint_t *h
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t s = 0;
	int i = 0;

	for (; h; i++)
	{
		s++;
		h = h->next;
	}
	return (s);
}
