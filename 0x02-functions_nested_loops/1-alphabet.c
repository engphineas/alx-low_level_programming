#include "main.h"
/**
* print_alphabet - preparing the alphabet
* Return: always 0 success
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
