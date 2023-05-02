#include "lists.h"

/**
 * get_nodeint_at_index - neturns the nth node
 * @index: the node index
 * @head: the list
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index-- && head)
		head = head->next;
	if (head != NULL)
		return (head);
	return (NULL);
}
