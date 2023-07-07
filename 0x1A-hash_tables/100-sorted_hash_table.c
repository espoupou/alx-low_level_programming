#include "hash_tables.h"

/**
 * shash_table_create - creates a shash table with a given size
 * @size: size of the shash table
 * Return: shash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	shash_node_t **array;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(shash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = NULL;

	table->array = array;
	table->size = size;
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * add_shash - adds a node at the beginning of a shash
 * @h: head of the shash linked list
 * @key: key of the shash
 * @value: value to store
 * Return: created node
 */
shash_node_t *add_shash(shash_node_t **h, const char *key, const char *value)
{
	shash_node_t *tmp;

	tmp = *h;

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (tmp);
		}
		tmp = tmp->next;
	}

	tmp = malloc(sizeof(shash_node_t));

	if (tmp == NULL)
		return (NULL);

	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = *h;

	*h = tmp;

	return (tmp);
}

/**
 * arrange - arange the hash table
 * @h: h=table head
 * @new: new node
 * Return: new head
 */
void arrange(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *tmp1, *tmp2;
	int ret;

	tmp1 = tmp2 = ht->shead;

	while (tmp1 != NULL)
	{
		ret = strcmp(new->key, tmp1->key);
		if (ret == 0)
		{
			return;
		}
		else if (ret < 0)
		{
			new->sprev = tmp1->sprev;

			if (tmp1->sprev)
				tmp1->sprev->snext = new;
			else
				ht->shead = new;

			tmp1->sprev = new;
			new->snext = tmp1;

			return;
		}
		tmp2 = tmp1;
		tmp1 = tmp1->snext;
	}

	new->sprev = tmp2;
	new->snext = NULL;

	if (ht->shead)
		tmp2->snext = new;
	else
		ht->shead = new;

	ht->stail = new;
}

/**
 * shash_table_set - adds a hash (key, value) to a given shash table
 *
 * @ht: shash table
 * @key: key
 * @value: value
 * Return: status 0 or 1
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k;
	shash_node_t *new;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	k = key_index((unsigned char *)key, ht->size);

	new = add_shash(&(ht->array[k]), key, value);

	if (new == NULL)
		return (0);

	arrange(ht, new);

	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: shash table
 * @key: key
 * Return: value associed
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int k;
	shash_node_t *tmp;

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

/**
 * shash_table_print - prints the keys and values of the shash table
 * @ht: shash table
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	tmp = ht->shead;

	while (tmp != NULL)
	{
		printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
		sep = ", ";
		tmp = tmp->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - prints in reverse
 * @ht: shash table
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	tmp = ht->stail;

	while (tmp != NULL)
	{
		printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
		sep = ", ";
		tmp = tmp->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - deletes a shash table
 * @ht: pointer to the shash table
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *tmp1;
	shash_node_t *tmp2;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp1 = ht->array[i];
		while ((tmp2 = tmp1) != NULL)
		{
			tmp1 = tmp1->next;
			free(tmp2->key);
			free(tmp2->value);
			free(tmp2);
		}
	}
	free(ht->array);
	free(ht);
}
