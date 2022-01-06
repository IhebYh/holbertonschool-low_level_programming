#include "lists.h"

/**
 * print_dlistint - prints all the elements of a double linked list
 * @h: dlistint_t
 * Return: size_t
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t s = 0;

	while (h->next)
	{
		print("%d\n", h->n);
		s++;
	}
	return (s);
}
