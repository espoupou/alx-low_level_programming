#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	int c = 0;

	while (h != NULL && h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}

	return (c);
}
