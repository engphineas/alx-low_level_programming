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
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
