#include "lists.h"

/**
 * pop_listint - function deletes the head node of list
 * @head: head pointer to the linked list
 *
 * Return: data deleted inside the node and 0 if empty list
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	temp_node = (*head)->next;
	free(*head);
	*head = temp_node;

	return (data);
}
