#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts a new node in listint_t
 * at a given position
 * @head: pointer to the first node in listint_t
 * @idx: index where to add the new node
 * @n: data to into the new node
 *
 * Return:  address to the new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new_node;
	listint_t *temp_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (j = 0; temp_node && j < idx; j++)
	{
		if (j == idx - 1)
		{
			new_node->next = temp_node->next;
			temp_node->next = new_node;
			return (new_node);
		}
		else
			temp_node = temp_node->next;
	}
	return (NULL);
}
