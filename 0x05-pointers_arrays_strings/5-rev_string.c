#include "main.h"
#include <stdio.h>

/**
 * rev_string -  that reverses a string
 * @s: the string to be reversed
 * reurn: void
 */
void rev_string(char *s)
{
	int length = 0;
	int index = 0;
	char temp;

	while (s[index++])
		length++;
	for (index = length - 1; index >= length / 2; index--)
	{
		temp = s[index];
		s[index] = s[length - index - 1];
		s[length - index - 1] = temp;
	}
}
