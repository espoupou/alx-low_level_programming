#include "lists.h"

/**
 * get_dnodeint_at_indexx - get nth node
 * @head: the head
 * @index: the index node
 * Return: the nth node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head != NULL && head->prev != NULL)
		head = head->prev;

	while (head != NULL && --index)
	{
		head = head->next;
	}

	return (head);
}
