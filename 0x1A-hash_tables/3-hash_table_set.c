#include "hash_tables.h"

hash_node_t *add_hash(hash_node_t **head, const char *key, const char *value);

/**
 * hash_table_set - setting new field in hash table
 * @ht: hash head
 * @key: the key
 * @value: value asssocied
 * Return: status 0 or 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	k = key_index((unsigned char *)key, ht->size);

	if (add_hash(&(ht->array[k]), key, value) == NULL)
		return (0);

	return (1);
}

/**
 * add_hash - add key value at the head
 * @head: the head
 * @key: key
 * @value: value
 * Return: the Head
 */

hash_node_t *add_hash(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *tmp;

	tmp = *head;

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (*head);
		}
		tmp = tmp->next;
	}

	tmp = malloc(sizeof(hash_node_t));

	if (tmp == NULL)
		return (NULL);

	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = *head;
	*head = tmp;

	return (*head);
}
