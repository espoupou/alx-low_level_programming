#include "hash_tables.h"

/**
 * hash_table_get - retrieves value of key
 * @ht: table head
 * @key: key of the hash
 * Return: value of key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int k;
	hash_node_t *tmp;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	k = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[k];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}
