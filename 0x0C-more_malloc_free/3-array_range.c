#include <stdlib.h>
#include "main.h"

/**
 * *array_range - function to create an array of integers
 * @min: min range of values stored in the array
 * @max: max range in values and number of elements
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *pointer;
	int j, nums;

	if (min > max)
		return (NULL);

	nums = ((max - min) + 1);

	pointer = malloc(sizeof(int) * nums);

	if (pointer == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		pointer[j] = min++;

	return (pointer);
}
