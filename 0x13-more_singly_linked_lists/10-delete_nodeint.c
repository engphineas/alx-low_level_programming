#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes an indexed node in a linked list
 * @head: head pointer to the list
 * @index: index node to delete
 *
 * Return: 1 if success and -1 if Fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_node = *head;
	listint_t *this_node = NULL;
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


	this_node = temp_node->next;
	temp_node->next = this_node->next;
	free(this_node);

	return (1);
}
