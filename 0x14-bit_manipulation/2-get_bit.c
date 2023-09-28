#include "main.h"

/**
 * get_bit - function to return the value of a bit at an index in a decimal
 * @n: number to be searched
 * @index: index
 *
 * Return: value of the bit from the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value_bit;

	if (index > 63)
		return (-1);

	value_bit = (n >> index) & 1;

	return (value_bit);
}

