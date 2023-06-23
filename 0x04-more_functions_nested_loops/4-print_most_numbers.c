#include "main.h"
/**
 * print_most_numbers -  prints the numbers, from 0 to 9.
 * Description: do not print 2 and 4
 * return: always 0 success
 */
void print_most_numbers(void)
{
	int x = 0;

	for (x = 0; x <= 9; x++)
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(x);
			_putchar('\n');
		}
}
