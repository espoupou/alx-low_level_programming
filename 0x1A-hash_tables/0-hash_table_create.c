#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the table
 * Return: table address
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int i = 0;

	if (!size)
		return (NULL);
	hash_table = malloc(sizeof(struct hash_table_s));
	if (hash_table == NULL)
		return (NULL);
	hash_table->array = malloc(sizeof(struct hash_node_s *) * size);
	if (hash_table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;
	hash_table->size = size;

	return (hash_table);
}
