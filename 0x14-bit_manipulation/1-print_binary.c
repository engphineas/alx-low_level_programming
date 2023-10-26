#include "main.h"

/**
 * print_binary - function to print the binary of a decimal number
 * @n: decimal number to convert in binary
 */
void print_binary(unsigned long int n)
{
	int j, tally = 0;
	unsigned long int place;

	for (j = 63; j >= 0; j--)
	{
		place = n >> j;

		if (place & 1)
		{
			_putchar('1');
			tally++;
		}
		else if (tally)
			_putchar('0');
	}
	if (!tally)
		_putchar('0');
}
