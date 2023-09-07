#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - function to reallocate a memory block using malloc and free
 * @ptr: pointer address to the mem previously allocated by malloc
 * @old_size: size in bytes allocated ptr in memory
 * @new_size: size in bytes of the new memory block
 *
 * Return: pointer address to the newly memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer1;
	char *prev_ptr;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	pointer1 = malloc(new_size);
	if (!pointer1)
		return (NULL);

	prev_ptr = ptr;

	if (new_size < old_size)
	{
		for (j = 0; j < new_size; j++)
			pointer1[j] = prev_ptr[j];
	}

	if (new_size > old_size)
	{
		for (j = 0; j < old_size; j++)
			pointer1[j] = prev_ptr[j];
	}

	free(ptr);
	return (pointer1);
}

