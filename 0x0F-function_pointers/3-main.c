#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - function to print the result of simple ops.
 * @argc: The number of arguments into the program.
 * @argv: An array of pointers into the arguments.
 *
 * Return: 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int number1, number2;
	char *ops;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	number1 = atoi(argv[1]);
	ops = argv[2];
	number2 = atoi(argv[3]);
	if (get_op_func(ops) == NULL || ops[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*ops == '/' && number2 == 0) ||
			(*ops == '%' && number2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(ops)(number1, number2));
	return (0);
}

