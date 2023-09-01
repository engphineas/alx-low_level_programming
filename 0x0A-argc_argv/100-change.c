#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - that prints the min number of coins
 * to make change in amount of money
 * @argc: count of arguments
 * @argv: vector of the arguments
 * Return: 1 if number of arguments is not exactly 1 otherwise 0
 */
int main(int argc, char *argv[])
{
	int cent;

	int coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	while (cent > 0)
	{
		coin++;
		if ((cent - 25)  >= 0)
		{
			cent -= 25;
			continue;
		}
		if ((cent - 10)  >= 0)
		{
			cent -= 10;
			continue;
		}
		if ((cent - 5)  >= 0)
		{
			cent -= 5;
			continue;
		}
		if ((cent - 2)  >= 0)
		{
			cent -= 2;
			continue;
		}
		cent--;
	}
	printf("%d\n", coin);
	return (0);
}

