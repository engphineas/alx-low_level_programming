#include "main.h"

/**
 * set_bit - function to set a bit to 1 at a given index
 * @n: pointer to the number to change
 * @index: index of bit to set to 1
 *
 * Return: 1 if success, -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	else
	{
		*n = ((1UL << index) | *n);
		return (1);
	}
}
