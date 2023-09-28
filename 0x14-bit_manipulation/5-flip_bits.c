#include "main.h"

/**
 * flip_bits - function to count the number of bits to flip to get from
 * one number to another.
 * @n: The first number
 * @m: The second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, flip_count = 0;
	unsigned long int state;
	unsigned long int excl_nm = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		state = excl_nm >> j;
		if (state & 1)
			flip_count++;
	}

	return (flip_count);
}
