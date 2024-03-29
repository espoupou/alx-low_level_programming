#include "lists.h"

/**
 * sum_listint - sum of all the data
 * @head: the list
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}

	return (s);
}
