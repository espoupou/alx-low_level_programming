#include "lists.h"

/**
 * listint_len - number of elements
 * @h: the list
 * Return: the size
 */

size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		h = h->next;
		s++;
	}
	return (s);
}
