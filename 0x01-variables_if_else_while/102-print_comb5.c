#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - prints all possible combinations of two two-digit numbers
* Return: 0 (Success)
*/

int main(void)
{
	int i;
	int h;

	for (i = 0; i <= 98; i++)
	{
		for (h = i + 1; h <= 99; h++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((h / 10) + '0');
			putchar((h % 10) + '0');
			if (i == 98 && h == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
