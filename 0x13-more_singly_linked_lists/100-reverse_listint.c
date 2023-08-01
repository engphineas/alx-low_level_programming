#include "lists.h"

/**
 * reverse_listint - function reverses a listint_t  linked list
 * @head: pointer to the first node in listint_t
 *
 * Return: pointer to the first node in the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old_list = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = old_list;
		old_list = *head;
		*head = next;
	}
	*head = old_list;
	return (*head);
}
