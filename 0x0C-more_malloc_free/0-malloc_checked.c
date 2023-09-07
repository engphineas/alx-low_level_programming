#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * *malloc_checked - funtion to allocate memory in malloc
 * @b: number of bytes to be allocated
 *
 * Return: pointer pointing to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
