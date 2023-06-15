#include "lists.h"

/**
 * add_dnodeint - append double linked list to node
 * @head: the head
 * @n: the new node value
 * Return: the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	while (h != NULL && h->prev != NULL)
		h = h->prev;

	new->n = n;
	new->prev = NULL;
	new->next = h;

	if (h != NULL)
		h->prev = new;

	*head = new;

	return (new);
}
