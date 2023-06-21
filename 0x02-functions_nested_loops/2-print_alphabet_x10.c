#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet
* Return: always 0 success
*/

void print_alphabet_x10(void)
{
	char c;
	int x = 0;

	while (x <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		x++;
	}
}
