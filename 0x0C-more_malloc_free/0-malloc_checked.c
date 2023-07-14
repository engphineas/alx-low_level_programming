#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size to allocate
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);
	return (pointer);
}
