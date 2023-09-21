#include <stdio.h>
#include "lists.h"

/**
 *print_list - funtion to print all the elements of a linkedlist
 *@h: pointer to the list named list_t to print
 *Return: the number of nodes and nil if str is NULL
 */
size_t print_list(const list_t *h)
{
	size_t node_num = 0;

	while(h)
	{
		if (!h->str)
		{
			printf("[0] nil\n");
		}
		else
		{
			printf("[%u] %s\n",h->len, h->str);
                        h = h->next;
                        node_num++;
		}
	}
	return (node_num);
}

