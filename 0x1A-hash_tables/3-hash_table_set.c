#include "hash_tables.h"

/**
 * hash_table_set - function to add an element to the hash table
 * @ht: pointer to the hash table
 * @key: key used to add the element
 * @value: value in the added element
 *
 * Return: if succeeded 1, otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	char *value_new, *key_new;
	hash_node_t  *container, *new_node;

	if (!ht || !key || !*key || !value)
		return (0);

	value_new = strdup(value);
	if (!value_new)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	container = ht->array[idx];

	while (container)
	{
		if (!strcmp(key, container->key))
		{
			free(container->value);
			container->value = value_new;
			return (1);
		}
		container = container->next;
	}
	new_node = calloc(1, sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_new);
		return (0);
	}
	key_new = strdup(key);
	if (!key_new)
		return (0);
	new_node->key = key_new;
	new_node->value = value_new;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
