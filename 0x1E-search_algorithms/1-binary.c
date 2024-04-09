#include "search_algos.h"

/**
  * binary_search - Function searches for a value in a sorted array of integers
  * using binary search.
  * @array: A pointer to the first element in the array to search.
  * @size: Number of elements in the array.
  * @value: The value to search for.
  *
  * Return: -1, If the value is not present or the array is NULL
  *         Otherwise, the index where the value is located.
  *
  * Description: Printing the sub-array being searched after each change.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t j, left_side, right_side;

	if (array == NULL)
		return (-1);

	for (left_side = 0, right_side = size - 1; right_side >= left_side;)
	{
		printf("Searching in array: ");
		for (j = left_side; j < right_side; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);

		j = left_side + (right_side - left_side) / 2;
		if (array[j] == value)
			return (j);
		if (array[j] > value)
			right_side = j - 1;
		else
			left_side = j + 1;
	}

	return (-1);
}
