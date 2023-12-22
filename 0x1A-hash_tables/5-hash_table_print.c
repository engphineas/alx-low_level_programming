#include "hash_tables.h"

/**
 * hash_table_print - function to print the key and value from hash table
 * @ht: pointer to the hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j = 0;
	hash_node_t  *container;
	int pair_track = 0;

	if (!ht)
		return;

	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		container = ht->array[j];
		while (pair_track)
		{
			if (pair_track)
				printf(", ");
			printf("'%s': '%s'", container->key, container->value);
			pair_track = 1;
			container = container->next;
		}
	}
	printf("}\n");
}
