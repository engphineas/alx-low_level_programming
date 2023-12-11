#include "main.h"
/**
 *  _memset - function to write in the memory
 *  @s: the address of memory to commence
 *  @b: the values
 *  @n: number of bytes changing
 *  Return: change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
