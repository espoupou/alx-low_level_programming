#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list
 * @head: the list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
