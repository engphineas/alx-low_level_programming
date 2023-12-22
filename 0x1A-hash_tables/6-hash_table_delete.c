#include "hash_tables.h"

/**
 * hash_table_delete - function free or deletes hash table and all nodes
 * @ht: pointer to the hash table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *container, *node_free;
	unsigned long int j = 0;

	if (!ht)
		return;

	for (j = 0; j < ht->size; j++)
	{
		container = ht->array[j];
		while (container)
		{
			node_free = container;
			container = container->next;
			if (node_free->key)
				free(node_free->key);
			if (node_free->value)
				free(node_free->value);
			free(node_free);
		}
	}
	free(ht->array);
	free(ht);
}
