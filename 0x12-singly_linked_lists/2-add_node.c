#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function adds a new node at the beginning of list
 * @head: double pointer to list_t
 * @str: new data of type string to add in the node
 *
 * Return: address of the new node, or NULL if fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_element = malloc(sizeof(list_t));
	if (!new_element)
		return (NULL);

	new_element->str = strdup(str);
	new_element->len = len;
	new_element->next = (*head);
	(*head) = new_element;

	return (*head);
}
