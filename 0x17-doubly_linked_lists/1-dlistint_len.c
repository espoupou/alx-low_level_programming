#include "lists.h"

/**
 * dlistint_len - double linked lisk lenght
 * @h: the head
 * Return: the lenght
 */

size_t dlistint_len(const dlistint_t *h)
{
	int c = 0;

	while (h != NULL && h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
