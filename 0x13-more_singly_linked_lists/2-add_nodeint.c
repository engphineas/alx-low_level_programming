#include "lists.h"

/**
 * add_nodeint - funtion adds a new node at the beginning linkedlist
 * @head: pointer to the head of linkedlist
 * @n: data to come with the new node
 *
 * Return: pointer to new node and NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

