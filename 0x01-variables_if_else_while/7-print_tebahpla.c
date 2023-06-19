#include <stdio.h>
/**
 * main is printing the lowercase alphabet in reverse,
 * followed by a new line
 * Return 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
