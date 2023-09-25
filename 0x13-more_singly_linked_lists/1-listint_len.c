#include "lists.h"

/**
 * listint_len - function calculates number of elements linked lists
 * @h: pointer of typedef listint_t
 *
 * Return: number of nodes in linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}

