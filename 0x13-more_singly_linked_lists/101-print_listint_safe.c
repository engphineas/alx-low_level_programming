#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - Funtion Counts the number of nodes uniquely
 * in looped listint_t.
 * @head: A pointer to the head of the listint_t.
 *
 * Return: -0 - If the list is not looped
 * Otherwise - the number of unique nodes in listint_t list.
 */
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *once, *twice;
	size_t nodes_num = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	once = head->next;
	twice = (head->next)->next;

	while (twice)
	{
		if (once == twice)
		{
			once = head;
			while (once != twice)
			{
				nodes_num++;
				once = once->next;
				twice = twice->next;
			}
			once = once->next;
			while (once != twice)
			{
				nodes_num++;
				once = once->next;
			}
			return (nodes_num);
		}
		once = once->next;
		twice = (twice->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - function prints a listint_t
 * linked list safely.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in thelinked list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes_num, indx = 0;

	nodes_num = looped_listint_len(head);

	if (nodes_num == 0)
	{
		for (; head != NULL; nodes_num++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (indx = 0; indx < nodes_num; indx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes_num);
}
