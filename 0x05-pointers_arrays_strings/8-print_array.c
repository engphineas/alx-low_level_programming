#include "main.h"
#include <stdio.h>

/**
 * print_array - that prints n elements of an array of ints
 * @a: an array of integers
 * @n: number of elementsof an array to be printed
 * return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
