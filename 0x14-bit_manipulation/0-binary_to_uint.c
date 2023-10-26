#include "main.h"

/**
 * binary_to_uint - funtion converts a binary number to unsigned integer
 * @b: string of binary numbers to convert
 *
 * Return: Integer in decimal from converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int converted_int = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		converted_int = 2 * converted_int + (b[j] - '0');
	}

	return (converted_int);
}
