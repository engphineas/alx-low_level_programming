#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp_freed;

	while (head)
	{
		temp_freed = head->next;
		free(head->str);
		free(head);
		head = temp_freed;
	}
}
