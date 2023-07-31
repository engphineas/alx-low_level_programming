#include "lists.h"

/**
 * get_nodeint_at_index - function returns the nth node of listint_t
 * @head: first node in the listint_t linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node in look up or NULL
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
