#include "main.h"
#include <stdio.h>

/**
 * puts2 -  that prints every other character of a string
 * @str: the string with the characters
 * return: void
 */
void puts2(char *str)
{
	int j;
	int k = 0;

	while (str[k] != '\0')
	{
		k++;
	}
	for (j = 0; j < k; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
