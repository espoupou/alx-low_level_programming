#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the table
 * Return: table address
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table = malloc(sizeof(struct hash_table_s));

	if (!size)
		return (NULL);

	if (table == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	table->array = malloc(sizeof(struct hash_node_s *) * size);
	if (table->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	table->size = size;

	return (table);
}
