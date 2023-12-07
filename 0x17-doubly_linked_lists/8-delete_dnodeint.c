#include "lists.h"

/**
 * delete_dnodeint_at_index - function deletes the node at an index
 * of dlistint_t linked list
 * @head: head pointer of the list
 * @index: index to the new node
 * Return: 1 if succeeded, or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head1;
	dlistint_t *head2;
	unsigned int j;

	head1 = *head;

	if (head1 != NULL)
		while (head1->prev != NULL)
			head1 = head1->prev;

	j = 0;

	while (head1 != NULL)
	{
		if (j == index)
		{
			if (j == 0)
			{
				*head = head1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				head2->next = head1->next;

				if (head1->next != NULL)
					head1->next->prev = head2;
			}

			free(head1);
			return (1);
		}
		head2 = head1;
		head1 = head1->next;
		j++;
	}

	return (-1);
}
