#include "lists.h"

/**
 * sum_dlistint - function returns the sum of all the data of
 * a doubly linked list
 * @head: head pointer to the list
 * Return: sum of the data in linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int data_sum = 0;
	
	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			data_sum += head->n;
			head = head->next;
		}
	}

	return (data_sum);
}
