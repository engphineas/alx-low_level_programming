#include "main.h"

/**
 * get_endianness - function checks a machine endianness little or big
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *s = (char *) &j;

	return (*s);
}
