#include "main.h"
#include <stdlib.h>
/**
 * create_array - that creates an array of chars.
 * @size: array size
 * @c: the char in the array
 * Return: a full array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
	{
		a[j] = c;
	}
	return (a);
}
