#include "lists.h"

/**
 * reverse_listint - reverses a listint_t
 * @head: the list
 * Return: the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *q = NULL;

	while (*head != NULL)
	{
		q = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = q;
	}

	*head = p;
	return (*head);
}
