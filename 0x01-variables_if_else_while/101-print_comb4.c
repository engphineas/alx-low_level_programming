#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ones = '0';
	int ten = '0';
	int hundred = '0';

	for (hundred = '0'; hundred <= '9' ; hundred++)
	{
		for (ten = hundred + 1; ten <= '9' ; ten++)
		{
			for (ones = ten + 1; ones <= '9' ; ones++)
			{
				if ((ten != hundred) != ones)
				{
					putchar(hundred);
					putchar(ten);
					putchar(ones);
					if (hundred == '7' && ten == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
