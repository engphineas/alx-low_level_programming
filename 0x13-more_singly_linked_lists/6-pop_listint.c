#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: pointer to the first element in listint_t
 *
 * Return: the head node data or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int head_value;

	if (!head || !*head)
		return (0);
	head_value = (*head)->n;
	temp_node = (*head)->next;
	free(*head);
	*head = temp_node;
	return (head_value);
}
