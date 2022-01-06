#include "lists.h"

/**
 * print_dlistint - prints all the elements of a double linked list
 * @h: dlistint_t
 * Return: size_t
*/
size_t print_dlistint(const dlistint_t *h)
{
	int i;
	size_t s = 0;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
		s++;
	}
	return (s);
}
