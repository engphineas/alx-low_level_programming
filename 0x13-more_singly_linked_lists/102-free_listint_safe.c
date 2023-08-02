#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list
 * @h: pointer to the first node of listint_t list
 *
 * Return:  size in number of elements in the list freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int variance;
	listint_t *temp_list;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		variance = *h - (*h)->next;
		if (variance > 0)
		{
			temp_list = (*h)->next;
			free(*h);
			*h = temp_list;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;
	return (length);
}
