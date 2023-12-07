#include "lists.h"

/**
 * add_dnodeint_end - function adds a new node at the end of
 * a dlistint_t list
 * @head: head of the list
 * @n: element value
 * Return: address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h_ptr;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	h_ptr = *head;

	if (h_ptr != NULL)
	{
		while (h_ptr->next != NULL)
			h_ptr = h_ptr->next;
		h_ptr->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	new_node->prev = h_ptr;

	return (new_node);
}
