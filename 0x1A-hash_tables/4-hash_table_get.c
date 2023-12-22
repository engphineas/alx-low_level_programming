#include "hash_tables.h"
/**
 * hash_table_get - function to retrieve value coresponding to the key
 * @ht: pointer to the hash table
 * @key: key to be used to retrive value
 *
 * Return: value or NULL if the key does not exit.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t  *container;

	if (!ht || !key || !*key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	container = ht->array[idx];

	while (container)
	{
		if (!strcmp(key, container->key))
			return (container->value);
		container = container->next;
	}
	return (NULL);
}
