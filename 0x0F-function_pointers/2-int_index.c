#include "function_pointers.h"
/**
 * int_index - return index if comparison is true and -1 if else
 * @array: array
 * @size: size of elements in the array
 * @cmp: pointer to function of one of the 3 in main function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
