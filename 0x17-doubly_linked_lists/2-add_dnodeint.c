#include "lists.h"

/**
 * add_dnodeint - function adds a new node at the beginning of
 * dlistint_t list
 * @head: head to the list
 * @n: element value
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *h_ptr;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	h_ptr = *head;

	if (h_ptr != NULL)
	{
		while (h_ptr->prev != NULL)
			h_ptr = h_ptr->prev;
	}

	new_node->next = h_ptr;

	if (h_ptr != NULL)
		h_ptr->prev = new_node;

	*head = new_node;

	return (new_node);
}
