#include <stdlib.h>
#include "main.h"

/**
 * *_memfill - function to fill memory with a constant byte
 * @f: section of memory to fill
 * @s: character to be copied
 * @n: number of times to copy character s
 *
 * Return: pointer to section f memory
 */
char *_memfill(char *f, char s, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		f[j] = s;
	}

	return (f);
}

/**
 * *_calloc - function to allocate memory for an array
 * @nmemb: number of elements in array.
 * @size: size in bytes of each element
 *
 * Return: pointer to the alllocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(nmemb * size);

	if (pointer == NULL)
		return (NULL);

	_memfill(pointer, 0, nmemb * size);

	return (pointer);
}

