#include <stdio.h>
/**
 * main -  to print numbers from 0 to 9.
 *
 * Return: 0 if its a (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
