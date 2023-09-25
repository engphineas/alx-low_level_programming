#include "lists.h"

/**
 * get_nodeint_at_index - function index node acesses in linked list
 * @head: head node in the linked list
 * @index: index node to access
 *
 * Return: pointer to the indexed node or NULL if fails
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp_node = head;

	while (temp_node && j < index)
	{
		temp_node = temp_node->next;
		j++;
	}

	return (temp_node ? temp_node : NULL);
}

