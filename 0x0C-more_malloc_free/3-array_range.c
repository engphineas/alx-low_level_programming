#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * array_range -creates an array of integers.
 * @min: values min limit
 * @max: values max limit
 * Return: a pointer to the new array.
 */
int *array_range(int min, int max)
{
	int *a, j = 0;

	if (min > max)
		return (NULL);
	a = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (a == NULL)
		return (NULL);
	while (min <= max)
	{
		a[j] = min;
		j++;
		min++;
	}
	return (a);
}
