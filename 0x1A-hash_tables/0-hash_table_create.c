#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: The size of the hash table
 *
 * Return: the pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table_h;

	if (size == 0)
		return (NULL);

	table_h = calloc(1, sizeof(hash_table_t));
	if (table_h == NULL)
		return (NULL);

	table_h->size = size;
	table_h->array = calloc(size, sizeof(hash_node_t *));
	if (table_h->array == NULL)
	{
		free(table_h);
		return (NULL);
	}
	return (table_h);
}
