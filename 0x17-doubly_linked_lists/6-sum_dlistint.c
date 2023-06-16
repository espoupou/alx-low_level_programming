#include "lists.h"

/**
 * sum_dlistint - sum element
 * @head: the head
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head != NULL && head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}

	return (s);
}
