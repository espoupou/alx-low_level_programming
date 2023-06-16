#include "lists.h"

/**
 * free_dlistint - free double linked list
 * @head: the head
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint *h = head;

	while (h != NULL && h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		h = head;
		head = head->next;
		free(h);
	}
}
