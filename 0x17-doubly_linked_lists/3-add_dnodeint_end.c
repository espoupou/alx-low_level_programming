#include "lists.h"

/**
 * add_dnodeint_end - append to double linked list
 * @head: the head
 * @n: the new node value
 * Return: the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h = *head;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	while (h != NULL && h->next != NULL)
		h = h->next;

	new->n = n;
	new->next = NULL;

	if (h != NULL)
	{
		h->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = h;

	return (new);
}
