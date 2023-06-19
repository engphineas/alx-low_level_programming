#include <stdio.h>
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
		for (ten = '0'; ten <= '9' ; ten++)
		{
			for (ones = '0'; ones <= '9' ; ones++)
			{
				if (!((ones == ten) || (ten > hundred) || (ten > ones) || (hundred > ten)))
				{
					putchar(hundred);
					putchar(ten);
					putchar(ones);
					if (!(ones == '9' && hundred == '7' && ten == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
