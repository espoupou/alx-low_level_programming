#include "hash_tables.h"

/**
 * hash_table_print - prints the keys and values of the hash table
 * @ht: table head
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", (i == 0) ? "" : ",", tmp->key, tmp->value);
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
