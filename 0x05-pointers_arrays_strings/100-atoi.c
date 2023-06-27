#include "main.h"

/**
 * _atoi - that convert a string to an integer.
 * @s: the pointer to be converted
 * Return: the integer to be returned
 */
int _atoi(char *s)
{
	int a = 0;
	unsigned int num = 0;
	int min = 1;
	int asi = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			min *= -1;
		}
		while (s[a] >= 48 && s[a] <= 57)
		{
			asi = 1;
			num = (num * 10) + (s[a] - '0');
			a++;
		}
		if (asi == 1)
		{
			break;
		}
		a++;
	}
	num *= min;
	return (num);
}
