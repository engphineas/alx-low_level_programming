#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node of a certain index in a listint_t
 * @head: pointer to the first element in the listint linked list
 * @index: index of the node to delete in the listint_t
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_node = *head;
	listint_t *current_node = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp_node);
		return (1);
	}
	while (j < index - 1)
	{
		if (!temp_node || !(temp_node->next))
			return (-1);
		temp_node = temp_node->next;
		j++;
	}

	current_node = temp_node->next;
	temp_node->next = current_node->next;
	free(current_node);
	return (1);
}
