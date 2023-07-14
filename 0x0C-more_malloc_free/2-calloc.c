#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number elements in the array
 * @size: size in bytes for each element
 * Return: Always 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int j = 0, k = 0;
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);
	k = nmemb * size;
	pointer = malloc(k);
	if (pointer == NULL)
		return (NULL);
	while (j < k)
	{
		pointer[j] = 0;
		j++;
	}
	return (pointer);
}
