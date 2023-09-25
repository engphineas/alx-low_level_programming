#include "lists.h"

/**
 * sum_listint - function calculates the sum of all the data in list
 * @head: head pointer to the linked list
 *
 * Return: calculated sum
 */
int sum_listint(listint_t *head)
{
	int total_sum = 0;
	listint_t *temp_head = head;

	while (temp_node)
	{
		total_sum += temp_node->n;
		temp_node = temp_node->next;
	}

	return (total_sum);
}
