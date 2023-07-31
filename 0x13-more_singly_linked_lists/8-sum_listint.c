#include "lists.h"

/**
 * sum_listint - function to sum of all the data in a listint_t
 * @head: first node in the listint_t
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp_node = head;

	while (temp_node)
	{
		sum += temp_node->n;
		temp_node = temp_node->next;
	}
	return (sum);
}
