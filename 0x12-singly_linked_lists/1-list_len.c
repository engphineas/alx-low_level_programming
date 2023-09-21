#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function returns the number of elements in the linked list
 * @h: pointer to the list called list_t
 *
 * Return: number of elements where h points
 */
size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}
