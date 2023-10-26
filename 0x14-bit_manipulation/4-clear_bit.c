#include "main.h"

/**
 * clear_bit - function sets the value of a bit to 0 at a given index
 * @n: pointer to the number to change value
 * @index: index of the bit
 *
 * Return: 1 if successful and -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	else
	{
		*n = (~(1UL << index) & *n);
		return (1);
	}
}
