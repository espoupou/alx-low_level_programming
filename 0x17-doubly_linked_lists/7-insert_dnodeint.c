#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a idx position in list
 * @h: the head
 * @idx: the index of insertion
 * @n!*: the new node value
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t new = NULL;

	if (idx == 0 || (h == NULL && idx == 0))
		add_dnodeint(h, n);

	while (h != NULL && h->prev != NULL)
		h = h->prev;

	while (h != NULL && --idx)
		h = h->next;

	if (idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		if (head == NULL)
			return add_dnodeint_end(h, n);
		new->n = n;
		new->next = head;
		new->prev = head->prev;
		new->prev->next = new;
		new->next->prev = new;
	}

	return (new);
}