#include <stdio.h>
/**
 * array_iterator - prints each array elemement on a newline
 * @array: array
 * @size: how many elements in array
 * @action: pointer to function print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;
	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
