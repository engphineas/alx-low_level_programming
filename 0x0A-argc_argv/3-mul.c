#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - that prints the number of arguments
 * @argc: count of arguments
 * @argv: vector of the arguments
 * Return: product
 */
int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

