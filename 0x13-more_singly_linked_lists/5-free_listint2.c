#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list
 * @head: the list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	if (*head != NULL)
	{
		while ((current = *head) != NULL)
		{
			*head = current->next;
			free(current);
		}
		*head = NULL;
	}
}
