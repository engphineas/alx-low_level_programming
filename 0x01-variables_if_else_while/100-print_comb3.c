#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: 0(Success)
 */
int main(void)
{
	int ones = '0';
	int ten = '0';

	for (ten = '0'; ten <= '9' ; ten++)
	{
		for (ones = ten + 1; ones <= '9' ; ones++)
		{
			if (ones != ten)
			{
				putchar(ten);
				putchar(ones);
				if (ten == '8' && ones == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
