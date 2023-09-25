#include "lists.h"

/**
 * add_nodeint_end - funtion to add a node at the end of linkedlist
 * @head: pointer to the head of the list
 * @n: data to come with the new node
 *
 * Return: pointer of the new node and NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp_node->next)
		temp _node = temp_node->next;

	temp_node->next = new_node;

	return (new_node);
}

