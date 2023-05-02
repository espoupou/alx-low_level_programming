#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node
 * @head: the list
 * @idx: index of new node
 * @n: new node data
 * Return: the new element adress
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	current = *head;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (idx-- > 1 && current != NULL)
		current  = current->next;

	if (current == NULL && idx != 0)
		return (NULL);

	new->next = current->next;
	current->next = new;

	return (new);
}
