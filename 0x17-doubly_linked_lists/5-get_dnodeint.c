#include "lists.h"

/**
 * get_dnodeint_at_index - function returns the indexed node of
 * a dlistint_t linked list.
 * @head: pointer to list head
 * @index: index of the node starting from 0
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int list_size;
	dlistint_t *temp;

	list_size = 0;
	if (head == NULL)
	return (NULL);

	temp = head;
	while (temp)
	{
	if (index == list_size)
	return (temp);
	list_size++;
	temp = temp->next;
	}
	return (NULL);
}
