#include "main.h"
#include <stdio.h>
/**
 * main - that prints the number of arguments
 * @argc: count of arguments
 * @argv: vector of the arguments
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
