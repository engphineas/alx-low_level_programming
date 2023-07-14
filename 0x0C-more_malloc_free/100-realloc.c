#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated by call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: size, in bytes, of the new memory block
 * Return: a pointer to the new array.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int j;
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	for (j = 0; j < old_size && j < new_size; j++)
	{
		new_ptr[j] = ((char *) ptr)[j];
	}
	free(ptr);
	return (new_ptr);
}
