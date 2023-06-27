#include <stdio.h>
/**
 * swap_int - that swaps the values of two integers
 * @a: first int to be swapped.
 * @b: second int to be swapped.
 * Return : void
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
