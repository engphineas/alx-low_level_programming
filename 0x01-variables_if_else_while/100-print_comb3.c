#include <stdio.h>
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
		for (ones = '0'; ones <= '9' ; ones++)
		{
			if (!((ones == ten) || (ten > ones)))
			{
				putchar(ten);
				putchar(ones);
				if (!(ones == '9' && ten == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
