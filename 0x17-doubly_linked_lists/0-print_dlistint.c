#include "lists.h"

/**
 * print_dlistint - function prints all the elements of dlistint_t list
 * @h: head to the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node_count = 0;

	if (h == NULL)
		return (node_count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}

	return (node_count);
}
