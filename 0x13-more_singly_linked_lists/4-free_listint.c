#include "lists.h"

/**
 * free_listint - function frees a linked list
 * @head: pointer to list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}
